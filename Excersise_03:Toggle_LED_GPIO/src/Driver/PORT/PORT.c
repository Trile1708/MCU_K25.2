#include "PORT.h"

void PORTC_PinConfig(uint8_t pin, uint8_t mux)
{
    IP_PORTC->PCR[pin] = PORT_PCR_MUX(mux);   // Chọn chức năng ALT = mux
}
