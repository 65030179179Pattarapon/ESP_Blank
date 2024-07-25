#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

void app_main(void)
{
    SET_LED_OUTPUT();
    while (1)
    {
        LED_ON();
        vTaskDelay(500 / portTICK_PERIOD_MS);
        LED_OOF();
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
}