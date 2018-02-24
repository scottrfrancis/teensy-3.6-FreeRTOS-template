#include <kinetis.h>
#include <stdlib.h>

#include <FreeRTOS.h>
#include <task.h>


// Heap allocation model 4
uint8_t ucHeap[ configTOTAL_HEAP_SIZE ];


// extern tasks declared elsewhere in program
void LEDTask(void* args);
void SerialTask(void* args);

int main() {
  // create the tasks
  xTaskCreate(LEDTask, "LT", configMINIMAL_STACK_SIZE, NULL, 1, NULL);
  xTaskCreate(SerialTask, "ST", configMINIMAL_STACK_SIZE, NULL, 2, NULL);

  // start scheduler, main should stop functioning here
  vTaskStartScheduler();

  for(;;);

  return 0;
}
