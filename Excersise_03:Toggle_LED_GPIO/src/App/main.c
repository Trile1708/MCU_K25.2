#include "S32K144.h"
#include "PCC.h"
#include "PORT.h"
#include "GPIO.h"

#define RED_LED_PIN     15U
#define GREEN_LED_PIN   16U
#define BTN1_PIN        12U
#define BTN2_PIN        13U

int main(void)
{
    /* 1. Bật clock cho PORTC */
    PCC_EnableClock_PORTC();

    /* 2. Cấu hình chân PORTC15, PORTC16 là GPIO output (LED) */
    PORTC_PinConfig(RED_LED_PIN, PORT_MUX_GPIO);
    PORTC_PinConfig(GREEN_LED_PIN, PORT_MUX_GPIO);

    /* 3. Cấu hình chân PORTC12, PORTC13 là input (Button) */
    PORTC_PinConfig(BTN1_PIN, PORT_MUX_GPIO);
    PORTC_PinConfig(BTN2_PIN, PORT_MUX_GPIO);

    /* 4. Thiết lập hướng chân */
    GPIO_SetPinOutput(IP_PTC, RED_LED_PIN);
    GPIO_SetPinOutput(IP_PTC, GREEN_LED_PIN);
    GPIO_SetPinInput(IP_PTC, BTN1_PIN);
    GPIO_SetPinInput(IP_PTC, BTN2_PIN);


    while (1)
    {
        if (GPIO_ReadPin(IP_PTC, BTN1_PIN) == 0) // Nút nhấn thường active-low
        {
            GPIO_TogglePin(IP_PTC, RED_LED_PIN);
            for (volatile int i = 0; i < 500000; i++); // delay thô
        }

        if (GPIO_ReadPin(IP_PTC, BTN2_PIN) == 0)
        {
            GPIO_TogglePin(IP_PTC, GREEN_LED_PIN);
            for (volatile int i = 0; i < 500000; i++);
        }
    }
}
