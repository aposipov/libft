#include "../libft.h"
#include <stdio.h>

int main()
{
		printf("%ld\n", ft_strlen("string"));
		printf("%ld\n", ft_strlen("123"));
		printf("%ld\n", ft_strlen("a\0"));
		printf("%ld\n", ft_strlen("1\n"));
		return (0);
}
