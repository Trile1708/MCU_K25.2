#include "LED/LED.h"

int main(void)
{
    LED_init();
    while(1)
    {
    	LED_Blink_Sequence();
    }
    return 0;
}
