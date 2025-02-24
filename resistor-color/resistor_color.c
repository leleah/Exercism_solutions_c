#include "resistor_color.h"
#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H
resistor_band_t expected[] = {BLACK,BROWN,RED,ORANGE,YELLOW,
GREEN,BLUE,VIOLET,GREY,WHITE};

uint16_t color_code(resistor_band_t color){
    return color;
}
resistor_band_t *colors() {
    for(int i=0;i<10;i++)
    {
        return color_code(expected[i]);
    }
    
}  
#endif

