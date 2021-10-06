#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (*s != '\0' && *s != (char)c)
        s++;
    if (*s != (char)c)
        return (NULL);
    else
        return ((char *)s);
}