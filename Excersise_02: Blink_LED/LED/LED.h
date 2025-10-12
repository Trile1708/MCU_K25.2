#ifndef LED_H
#define LED_H

#include "S32K144.h"
#include <stdint.h>

/*==========================
    Function Prototypes
==========================*/
void LED_init(void);
void LED_on(uint8_t led);
void LED_off(uint8_t led);
void LED_blink_sequence(void);
void delay_ms(uint32_t ms);

/* LED PIN definitions */
#define LED_RED_PIN     (15) // PTD15
#define LED_GREEN_PIN   (16) // PTD16
#define LED_BLUE_PIN    (0) // PTD0

#endif /* LED_H */
