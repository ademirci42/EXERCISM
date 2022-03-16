#include "resistor_color.h"
#include <stdio.h>

resistor_band_t    color_code(resistor_band_t color)
{    
    static resistor_band_t    expected[] = { BLACK, BROWN, RED,    ORANGE, YELLOW,
                                        GREEN, BLUE,  VIOLET, GREY,   WHITE };
    return(expected[color]);
    
}
resistor_band_t    *colors(void)
{
    static resistor_band_t    expected[] = { BLACK, BROWN, RED,    ORANGE, YELLOW,
                                        GREEN, BLUE,  VIOLET, GREY,   WHITE };
    return(expected);
}