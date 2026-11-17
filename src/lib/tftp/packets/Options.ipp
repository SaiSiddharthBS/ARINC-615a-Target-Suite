// SPDX-License-Identifier: MPL-2.0
/**
 * @file
 * @copyright
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * @author Thomas Vogt, thomas@thomas-vogt.de
 *
 * @brief Definition of Module Tftp::Packets Options.
 **/

#ifndef TFTP_PACKETS_OPTIONS_IPP
#define TFTP_PACKETS_OPTIONS_IPP

namespace Tftp::Packets {

template< typename IntT >
std::pair< bool, std::optional< IntT > > Options_getOption(
  Options &options,
  std::string_view name,
  const IntT min,
  const IntT max )
{
  static_assert( std::is_integral< IntT >::value && std::is_unsigned< IntT >::value,
    "Options_getOption requires an unsigned integral type" );

  // Find the option using an iterator.
  // VxWorks 24.03 does not provide node_handle::mapped().
  auto option{ options.find( std::string{ name } ) };

  // Option with name not found in the option list
  if ( option == options.end() )
  {
    // Option negotiation passed with not set option value
    return { true, {} };
  }

  // Get the option value before erasing the option.
  const std::string optionString{ option->second };

  // Preserve the original extract() behavior:
  // remove the option from the option list after retrieving it.
  options.erase( option );

  if ( optionString.empty() )
  {
    // Option negotiation failed
    return { false, {} };
  }

  try
  {
    const auto optionValue{ std::stoull( optionString ) };

    if ( ( optionValue < min ) || ( optionValue > max ) )
    {
      // Option negotiation failed
      return { false, {} };
    }

    // Option negotiation passed with value
    return { true, static_cast< IntT >( optionValue ) };
  }
  catch ( const std::invalid_argument & )
  {
    // Option negotiation failed
    return { false, {} };
  }
  catch ( const std::out_of_range & )
  {
    // Option negotiation failed
    return { false, {} };
  }
  catch ( ... )
  {
    // Option negotiation failed
    return { false, {} };
  }
}

}

#endif
