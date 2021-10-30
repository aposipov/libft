#include "../libft.h"
#include <stdio.h>

void f(void *f_ch)
{
	((char *)f_ch)[0] = 'W';
}

int main()
{
	t_list *lst;
	char *a1;
	char *a2;
	char *a3;
	char *a4;

	a1 = malloc(sizeof(char) * 6);
	ft_strlcpy(a1, "word1", 6);
	lst = ft_lstnew(a1);
	a2 = malloc(sizeof(char) * 6);
	ft_strlcpy(a2, "word2", 6);
	lst -> next = ft_lstnew(a2);
	a3 = malloc(sizeof(char) * 6);
	ft_strlcpy(a3, "word3", 6);
	lst -> next -> next = ft_lstnew(a3);
	a4 = malloc(sizeof(char) * 6);
	ft_strlcpy(a4, "word4", 6);
	lst -> next -> next -> next = ft_lstnew(a4);
	ft_lstiter(lst, &f);
	while(lst)
	{
		printf("%s\n", (char *)lst -> content);
		lst = lst -> next;
	}
}
