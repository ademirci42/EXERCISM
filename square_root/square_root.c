#include "square_root.h"

uint64_t    square_root(uint64_t number)
{
    uint64_t    i;
    i = 1;
    while(number != i * i)
        i++;
    return(i);
}