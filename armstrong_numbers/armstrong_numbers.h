#ifndef ARMSTRONG_NUMBERS_H
#define ARMSTRONG_NUMBERS_H

#include <stdbool.h>
#include <stdlib.h>

bool is_armstrong_number(int candidate);
int *ft_cndtcpy(int *candidate, int len);
int ft_addition(int *candidate, int len);
int *ft_multiplication(int *candidate, int len);
int *ft_write_digit(int candidate, int len);
int ft_numlen(int num);

#endif