#include "source.h"
#include "pico/stdlib.h"
#include <stdio.h>

int main() {
  const uint LED_PIN = PICO_DEFAULT_LED_PIN;
  gpio_init(LED_PIN);
  gpio_set_dir(LED_PIN, GPIO_OUT);

  gpio_put(LED_PIN, 1);
  sleep_ms(250);
  gpio_put(LED_PIN, 0);
  sleep_ms(250);
  gpio_put(LED_PIN, 1);
  

  return 0;
}
