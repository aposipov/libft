#include "../libft.h"
#include <stdio.h>

void *f(void *f_ch)
{
	int len;
	char *a;

	len = ft_strlen((char *)f_ch);
	a = malloc (sizeof(char) * len + 1);
	ft_strlcpy(a, (char *)f_ch, len + 1);
	a[0] = 'W';
	return (a);
}

void del(void *cont)
{
	//printf("del - %s\n", (char *)cont);
	free(cont);
}

int main()
{
	t_list *lst;
	t_list *lst0;
	t_list *lst1;
	char *a1;
	int size_of_list = 2;

	a1 = malloc(sizeof(char) * 6);
	ft_strlcpy(a1, "word1", 6);
	lst = ft_lstnew(a1);

	lst0 = lst;
	while(size_of_list <= 4)
	{
		a1 = malloc(sizeof(char) * 6);
		ft_strlcpy(a1, "word1", 6);
		a1[4] = (size_of_list % 10) + '0';
		lst -> next = ft_lstnew(a1);
		lst = lst -> next;
		size_of_list++;
	}
	lst1 = ft_lstmap(lst0, f, del);
	while(lst0)
	{
		printf("%s\n", (char *)lst0 -> content);
		printf("%s\n", (char *)lst1 -> content);
		lst0 = lst0 -> next;
	}
}
