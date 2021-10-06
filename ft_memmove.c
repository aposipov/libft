#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;

    if (src < dest)
        ft_memcpy(dest, src, n);
    else
    {
        i = 0;
        while (i < n)
        {
            ((char *)dest)[i] = ((char *)src)[i];
            i++;
        }
    }
    return(dest);    
}