extern "C" {
#include "ets_sys.h"
#include "gpio.h"
#include "mem.h"
#include "osapi.h"
#include "os_type.h"
#include "missing_esp8266_prototypes.h"
}

void blink(void*) {
    os_printf("In the loop\n");
    const int lightPin = 2;
    bool lightIsOn = GPIO_INPUT_GET(lightPin);
    GPIO_OUTPUT_SET(lightPin, !lightIsOn);
}

//Init function
extern "C" void ICACHE_FLASH_ATTR user_init() {
    os_printf("Starting up!\n");
    gpio_init();
    os_timer_t * blinkTimer = static_cast<os_timer_t *>(os_malloc(sizeof(os_timer_t)));
    os_timer_setfn(blinkTimer, blink, nullptr);
    const int blinkIntervalMs = 500;
    const int repeatedlyBlink = 1;
    os_timer_arm(blinkTimer, blinkIntervalMs, repeatedlyBlink);
}
