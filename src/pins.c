#include "pins.h"
#include "out_control.h"

void Pins_Init(void)
{
    /*
     * AN0 no MCA048 está em RA0.
     * RA1 fica reservado para o LED amarelo externo.
     */
    ANSELA = 0x0000;
    ANSELB = 0x0000;
    ANSELC = 0x0000;
    ANSELD = 0x0000;

    ANSELAbits.ANSA0 = 1;
    TRISAbits.TRISA0 = 1;

    RLED_DIR = 0;
    GLED_DIR = 0;
    YLED_DIR = 0;

    LEDs_ClearAll();
}
