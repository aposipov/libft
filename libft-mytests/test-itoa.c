#include "../libft.h"
#include <stdio.h>

int main()
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-10));	
	printf("%s\n", ft_itoa(10));
	printf("%s\n", ft_itoa(-8888));
	printf("%s\n", ft_itoa(8888888));
	printf("%s\n", ft_itoa(999999999));	
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483650));
}
