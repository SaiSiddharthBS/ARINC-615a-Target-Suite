#!/usr/bin/env python3
"""Run the board's Information-only verifier against the host THA.

Use the shipped JSON, changing only bind addresses and ports in a temporary
copy. No upload/download storage paths are accessed by this test.
"""
import argparse
import json
from pathlib import Path
import socket
import subprocess
import sys
import tempfile

import network_smoke as net


def run(runner):
    root = Path(__file__).resolve().parent.parent
    config = json.loads((root / 'arinc615a_test.json').read_text())
    with net.udp() as reservation:
        find_port = reservation.getsockname()[1]
    with net.udp() as reservation:
        tftp_port = reservation.getsockname()[1]
    config['arinc_615a_find'].update(local_find_address='127.0.0.1', find_port=find_port)
    config['arinc_615a']['local_tftp_address'] = '127.0.0.1'
    config['arinc_615a']['tftp']['port'] = tftp_port
    with tempfile.TemporaryDirectory(prefix='arinc-current-config-') as directory:
        path = Path(directory) / 'config.json'
        path.write_text(json.dumps(config))
        proc = subprocess.Popen([runner, str(path)], stdin=subprocess.PIPE, text=True)
        try:
            with net.udp() as probe:
                probe.settimeout(0.1)
                for _ in range(50):
                    assert proc.poll() is None, 'THA exited during startup'
                    probe.sendto(b'\0\1\0\x10', ('127.0.0.1', find_port))
                    try:
                        answer, _ = probe.recvfrom(2048)
                        assert b'ARINC' in answer
                        break
                    except socket.timeout:
                        continue
                else:
                    raise AssertionError('THA did not answer FIND')
            subprocess.run([
                sys.executable, '-B', str(root / 'tests/vxworks_target_test.py'),
                '--target', '127.0.0.1', '--bind', '127.0.0.1',
                '--find-port', str(find_port), '--tftp-port', str(tftp_port),
                '--information-only', '--serial', 'DEMO001',
            ], check=True, timeout=30)
        finally:
            try:
                proc.communicate('stop\n', timeout=5)
            except subprocess.TimeoutExpired:
                proc.kill()
                proc.communicate()
                raise AssertionError('THA failed to stop')
        assert proc.returncode == 0, proc.returncode


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--runner', required=True)
    run(parser.parse_args().runner)
