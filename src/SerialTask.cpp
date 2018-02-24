#include <FreeRTOS.h>
#include <task.h>

#include <Arduino.h>
#include <usb_dev.h>

void SerialTask(void* args) {
  // initialize the serial
  usb_init();
  Serial.begin(9600);

  for (;;) {
    Serial.println("Added a bunch of TCP/IP Files");
    vTaskDelay(1000);
  }
}
