#include "display.h"
#include "esp_log.h"

void app_main(void)
{
    ESP_LOGI("main", "Starting display");
    display_init();
    ESP_LOGI("main", "Display init finished");
}