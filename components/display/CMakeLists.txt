idf_component_register(
  SRCS "display.c"
  INCLUDE_DIRS "."
  PRIV_REQUIRES
        ssd1306
        esp_driver_spi
        esp_driver_gpio
        esp_driver_i2c
        log
)
