#include "../libft.h"

int main()
{
	t_list *empty = NULL;
	char	strs[0] = ft_strdup("blabla"); 
			
	ft_lstadd_front(&empty, ft_lstnew(strs[0]));
	

	return(0);
}
