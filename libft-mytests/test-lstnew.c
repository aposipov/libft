#include "../libft.h"
#include <stdio.h>

int main()
{
	t_list *b;

	b = ft_lstnew("vuale");
	printf("%s\n", (char *)(b->content));
	printf("%p\n", &(b->content));
}
