#include "libft.h"

void    (size_t nmemb, size_t size)
{
    char *array;

    size = size * nmemb;
    if (!(array = malloc(size)))
        return (null)
    ft_bzero(array, size);
    return (array);
}