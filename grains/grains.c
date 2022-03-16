#include "grains.h"

uint64_t square(uint8_t index)
{
    uint64_t i;
    i = 2;
    if(index <= 64 && index > 0)
    {
        if (index == 1)
            return(1);
        return(i<<(index - 2));
    }
    return (0);
}
uint64_t total(void)
{
    return(18446744073709551615ull);
}