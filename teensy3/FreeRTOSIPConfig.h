/*
 * Project specific overrides for FreeRTOSIPConfigDefaults
 *
 */

#ifndef FREERTOS_IP_CONFIG_H
#define FREERTOS_IP_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif


/* built these mostly to satisfy errors */
#define ipconfigEVENT_QUEUE_LENGTH        ipconfigNUM_NETWORK_BUFFER_DESCRIPTORS + 5
#define ipconfigNETWORK_MTU               586
#define ipconfigIP_TASK_STACK_SIZE_WORDS  512     // total guess
#define ipconfigIP_TASK_PRIORITY          configMAX_PRIORITIES >> 1     // uhh.. in the middle?



#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* FREERTOS_IP_CONFIG_H */
