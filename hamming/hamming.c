#include "hamming.h"
#include <string.h>

int ft_difference(const char *lhs, const char *rhs)
{
    int    i;
    int    c;
    i = 0;
    c = 0;
    while(lhs[i] && rhs[i])
    {
        if (lhs[i] != rhs[i])
            c++;
        i++;
    }
    return (c);
}
int compute(const char *lhs, const char *rhs)
{
    int    i;
    i = strcmp(lhs, rhs);
    if (strlen(lhs) != strlen(rhs))
        i = -1;
    if (i == 0)
        return(0);
    if (i == -1)
        return(-1);
    return(ft_difference(lhs, rhs));
    
}
