#include "libft.h"

char    *ft_strdup(const char *s)
{
    char *str;
    size_t len;
    size_t i;

    len = ft_strlen(s);
    i = 0;
    if (!(str = malloc (len + 1)))
        return (NULL);
    while (i < len)
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);    
}
