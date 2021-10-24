#include "../libft.h"
#include <stdio.h>

int main()
{
		int len0, len1, len2;
		char str0 [] = "string";
		char str1 [] = "123";
		char str2 [] = "a\0";

		len0 = ft_strlen(str0);
		len1 = ft_strlen(str1);
		len2 = ft_strlen(str2);
		printf("len0 = %d\n", len0);
		printf("len1 = %d\n", len1);
		printf("len2 = %d\n", len2);
		return (0);
}
