#ifndef PORT_H
#define PORT_H

#include "S32K144.h"
#include <stdint.h>

#define PORT_MUX_GPIO 1   // ALT1 = GPIO mode

void PORTC_PinConfig(uint8_t pin, uint8_t mux);

#endif /*PORT_H*/
