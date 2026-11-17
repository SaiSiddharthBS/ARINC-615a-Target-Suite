#include <stdio.h>
#include <taskLib.h>

#include "src/app/arinc_615a_unit_test/arinc_615a_test_tha/Arinc615aThaC.h"


/*
 * ARINC 615A configuration file.
 *
 * The ARINC 615A runtime can fall back to its default configuration
 * when this file is not available.
 */
static const char *g_arinc615aConfigFile =
    "/hostfs/ws/ARINC-Open-Source-Lib/arinc615a_test.json";


/*
 * Worker task for the ARINC 615A Target Host Application.
 *
 * arinc615a_tha_run_file() is a blocking function, so it must run
 * in its own VxWorks task rather than directly inside start().
 */
static void arinc615aTask(int arg)
{
    int result;

    (void)arg;

    printf("\n");
    printf("========================================\n");
    printf("   ARINC 615A THA STARTING\n");
    printf("========================================\n");

    printf("Configuration file: %s\n", g_arinc615aConfigFile);

    /*
     * Start the ARINC 615A Target Host Application.
     */
    result = arinc615a_tha_run_file(g_arinc615aConfigFile);

    printf("\n");
    printf("========================================\n");
    printf("   ARINC 615A THA STOPPED\n");
    printf("========================================\n");

    printf("Result = %d\n", result);
}


/*
 * DKM entry point.
 *
 * This function is called when the DKM is started.
 * It creates the worker task that starts ARINC 615A.
 */
void start(void)
{
    TASK_ID taskId;

    printf("\n");
    printf("========================================\n");
    printf("      ARINC_26 DKM START\n");
    printf("========================================\n");

    /*
     * VxWorks 24.03 taskSpawn() requires:
     *
     * name
     * priority
     * options
     * stack size
     * entry function
     * arg1 ... arg10
     */
    taskId = taskSpawn(
        "tArinc615a",            /* Task name */
        100,                     /* Priority */
        0,                       /* Task options */
        100000,                  /* Stack size */
        (FUNCPTR)arinc615aTask,  /* Entry function */
        0,                       /* arg1 */
        0,                       /* arg2 */
        0,                       /* arg3 */
        0,                       /* arg4 */
        0,                       /* arg5 */
        0,                       /* arg6 */
        0,                       /* arg7 */
        0,                       /* arg8 */
        0,                       /* arg9 */
        0                        /* arg10 */
    );

    if (taskId == TASK_ID_ERROR)
    {
        printf("ERROR: Failed to create ARINC 615A task.\n");
        return;
    }

    printf("ARINC 615A task created successfully.\n");
    printf("Task ID = %p\n", (void *)taskId);

    printf("========================================\n");
    printf("      ARINC_26 DKM START COMPLETE\n");
    printf("========================================\n");
}


/*
 * Request the running ARINC 615A THA to stop.
 */
void stopArinc615a(void)
{
    int result;

    result = arinc615a_tha_request_stop();

    if (result)
    {
        printf("ARINC 615A stop request queued.\n");
    }
    else
    {
        printf("ARINC 615A is not running or stop request failed.\n");
    }
}

