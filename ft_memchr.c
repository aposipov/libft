#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    while (*(unsigned char *)s && n)
    {
        if (*(unsigned char *)s == (unsigned char)c)
            return ((void *)s);
        /* !!! */
        *s++;
        n--;

    }
    if (*(unsigned char *)s == '\0')
        if (*(unsigned char *)s == (unsigned char)c)
            return ((void *)s);
    return (NULL);
}