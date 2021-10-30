#include "../libft.h"
#include <stdio.h>

void del(void *a)
{
	printf("removed: %s\n", (char *)a);
	return;
}

int main()
{
	t_list *lst;
	//t_list *lst1;

	lst = ft_lstnew("word1");
	lst -> next = ft_lstnew("word2");
	lst -> next -> next = ft_lstnew("word3");
	lst -> next -> next -> next = ft_lstnew("word4");
	ft_lstclear(&(lst -> next -> next), del);
	//lst1 = lst;
	while(lst)
	{
		printf("%s\n",((char *)lst -> content));
		lst = lst -> next;
	}
}
