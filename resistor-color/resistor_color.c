#include "resistor_color.h"

resistor_band_t res;
   resistor_band_t expected[] = { BLACK, BROWN, RED,    ORANGE, YELLOW,
                                        GREEN, BLUE,  VIOLET, GREY,   WHITE };
resistor_band_t color_code(resistor_band_t resistor){

return expected[resistor];
    
}
 resistor_band_t* colors(void){

    return (&expected[0]);
}


