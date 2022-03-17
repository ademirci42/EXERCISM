#include "difference_of_squares.h"

unsigned int power_of_two(unsigned int sum)
{
    unsigned int potn;
    potn = sum;
    potn *= sum;
    return (potn);
}
unsigned int square_of_sum(unsigned int number)
{
    unsigned int sum;
    
    sum = 0;
    while(number > 0)
    {
        sum += number--;
    }
    return(power_of_two(sum));
}
unsigned int sum_of_squares(unsigned int number)
{
    unsigned int square;
    square = 0;
    while (number > 0)
    {
        square += power_of_two(number--);
    }
    return(square);
}
unsigned int difference_of_squares(unsigned int number)
{
    return(square_of_sum(number) - sum_of_squares(number));
}