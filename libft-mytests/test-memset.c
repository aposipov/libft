#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];
	//char *a;

	strcpy(str, "test_string");
	puts(str);

	ft_bzero(str, 4);
	puts(str);
	//printf("%s\n", a);
	return (0);
}
