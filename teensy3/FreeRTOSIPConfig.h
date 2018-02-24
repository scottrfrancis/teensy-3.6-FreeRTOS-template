/*
 * Project specific overrides for FreeRTOSIPConfigDefaults
 *
 */

#ifndef FREERTOS_IP_CONFIG_H
#define FREERTOS_IP_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif


/*
 * TODO: validate or update these pvParameters
 */

/* built these mostly to satisfy errors */
#define ipconfigEVENT_QUEUE_LENGTH        ipconfigNUM_NETWORK_BUFFER_DESCRIPTORS + 5
// #define ipconfigNETWORK_MTU               586
#define ipconfigIP_TASK_STACK_SIZE_WORDS  512     // total guess
#define ipconfigIP_TASK_PRIORITY          configMAX_PRIORITIES >> 1     // uhh.. in the middle?

/* these came from the example page */
#define ipconfigUSE_TCP_WIN               1       // only disable for small systems <64K RAM

#define ipconfigTCP_TX_BUFFER_LENGTH      (4*ipconfigTCP_MSS)
#define ipconfigTCP_RX_BUFFER_LENGTH      (4*ipconfigTCP_MSS)

#define ipconfigNUM_NETWORK_BUFFER_DESCRIPTORS  7    // another guess!

#define ipconfigNETWORK_MTU               1526
#define ipconfigTCP_MSS                   1460


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* FREERTOS_IP_CONFIG_H */
