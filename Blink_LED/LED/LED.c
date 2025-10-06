#include "LED.h"

/*==========================
        LED Definition
==========================*/

void LED_init(void)
{
    /* Enable clock for PORTD */
    PCC->PCCn[PCC_PORTD_INDEX] |= PCC_PCCn_CGC_MASK;

    /* Configure MUX for GPIO function */
    PORTD->PCR[LED_RED_PIN]   = PORT_PCR_MUX(1);   
    PORTD->PCR[LED_GREEN_PIN] = PORT_PCR_MUX(1);   
    PORTD->PCR[LED_BLUE_PIN]  = PORT_PCR_MUX(1);   

    /* Set LED pins as output */
    PTD->PDDR |= (1 << LED_RED_PIN) | (1 << LED_GREEN_PIN) | (1 << LED_BLUE_PIN);

    /* Turn off all LEDs initially (assuming active low) */
    PTD->PSOR = (1 << LED_RED_PIN) | (1 << LED_GREEN_PIN) | (1 << LED_BLUE_PIN);
}

/* LED Control Functions */
void LED_on(uint8_t led)
{
    PTD->PCOR = (1 << led); // Active low
}

void LED_off(uint8_t led)
{
    PTD->PSOR = (1 << led); // Active high
}

/* LED Blink sequence */
void LED_Blink_Sequence(void)
{
    LED_on(LED_RED);
    delay_ms(3000);
    LED_off(LED_RED);

    LED_on(LED_GREEN);
    delay_ms(3000);
    LED_off(LED_GREEN);

    LED_on(LED_BLUE);
    delay_ms(3000);
    LED_off(LED_BLUE);
}

/* Delay function */
void delay_ms(uint32_t ms)
{
    volatile uint32_t count;
    while(ms--) {
        for(count =0; count < 8000; count++);{
            _NOP();
        }
    }
}