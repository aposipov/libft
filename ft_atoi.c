#include "libft.h"

int     ft_atoi(const char *nptr)
{
    int sign;
    int num;

    sign = 1;
    num = 0;
    while ((*nptr == ' ') || (*nptr == '\t') || (*nptr == '\n') 
    || (*nptr == '\v') || (*nptr == '\f') || (*nptr == '\r'))
        nptr++;
    if (*nptr == '-')
        sign = -1;
    while ((*nptr == '-') || (*nptr == '+'))
        nptr++;
    while(*nptr >= '0' && *nptr <= '9')
    {
        num = (num * 10) + ((int)*nptr - '0');
        nptr++;
    } 
    return (num * sign);
}