#include "armstrong_numbers.h"
int *ft_cndtcpy(int *candidate, int len)
{
    int *new_candidate;
    int i;
    
    i = 0;
    new_candidate = malloc(sizeof(int) * len);
    
    while(i < len)
    {
        new_candidate[i] = candidate[i];
        i++;
    }
    return (new_candidate);
}
int ft_addition(int *candidate, int len)
{
    int i;
    int result;
    
    i = 0;
    result = 0;
    while(i < len)
    {
        result += candidate[i];
        i++;
    }
    return (result);
}
int *ft_multiplication(int *candidate, int len)
{
    int i;
    int j;
    int *new_candidate;
    
    j = 0;
    i = 0;
    new_candidate = ft_cndtcpy(candidate, len);
    if (len == 1)
        return(candidate);
    while(i < len)
    {
        while(j < (len - 1))
        {
            candidate[i] *= new_candidate[i];
            j++;
        }
        i++;
        j = 0;
    }
    return (candidate);
}
int *ft_write_digit(int candidate, int len)
{
    int *i;
    int j;
    
    j = 0;
    i = malloc(sizeof(int) * len);
    while(candidate > 0)
    {
        i[j] = candidate % 10;
        candidate /= 10;
        j++;
    }
    return (i);
}
int ft_numlen(int num)
{
    int len;
    len = 0;
    while(num != 0)
    {
        num = num / 10;
        len++;
    }
    return (len);
}
bool is_armstrong_number(int candidate)
{
    int len;
    int result;
    int *new_candidate;
    
    len = ft_numlen(candidate);
    new_candidate = ft_write_digit(candidate, len);
    new_candidate = ft_multiplication(new_candidate, len);
    result = ft_addition(new_candidate, len);
    if(result == candidate)
        return (1);
    else
        return (0);
}