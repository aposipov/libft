/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-1-5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:19:54 by lchristi          #+#    #+#             */
/*   Updated: 2021/10/28 12:24:38 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*isalpha; isdigit; isalnum; isascii; isprint */

#include "../libft.h"
#include <stdio.h>

int	main()
{
	int	var1 = 'a';
	int	var2 = '-';
	int	var3 = '\t';
	int	var4 = ' ';
	int	var5 = '!';
   	
	if (ft_isalnum(var1))
		printf("var1(a) = %c\n", var1);
		else
			printf("false\n");
	if (ft_isalnum(var2))
		printf("var2(2) = %c\n", var2);
		else 
			printf("false\n");
	if (ft_isalnum(var3))
		printf("var3(tab) = %c\n", var3);
		else
			printf("false\n");
	if (ft_isalnum(var4))
		printf("var4(space) = %c\n", var4);
		else
			printf("false\n");
	if (ft_isalnum(var5))
		printf("var5(!) = %c\n", var5);
		else
			printf("false\n");
	return (0);
}
