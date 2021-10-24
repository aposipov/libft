/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:19:54 by lchristi          #+#    #+#             */
/*   Updated: 2021/10/21 17:17:07 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main()
{
	int	var1 = 'a';
	int	var2 = '2';
	int	var3 = '\t';
	int	var4 = ' ';
   	
	printf("#ft_isalpha#\n");
	if (ft_isalpha(var1))
		printf("%c\n", var1);
		else
			printf("false\n");
	if (ft_isalpha(var2))
		printf("%c\n", var2);
		else 
			printf("false\n");
	if (ft_isalpha(var3))
		printf("%c\n", var3);
		else
			printf("false\n");
	if (ft_isalpha(var4))
		printf("%c\n", var4);
		else
			printf("false\n");
	printf("#ft_isdigit#\n");
	if (ft_isdigit(var1))
		printf("%c\n", var1);
		else
			printf("false\n");
	if (ft_isdigit(var2))
		printf("%c\n", var2);
		else
			printf("false\n");
	if (ft_isdigit(var3))
		printf("%c\n", var3);
		else
			printf("false\n");
	if (ft_isdigit(var4))
		printf("%c\n", var4);
		else
			printf("false\n");
		
	return(0);
}
