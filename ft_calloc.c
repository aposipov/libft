/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:58:18 by lchristi          #+#    #+#             */
/*   Updated: 2021/10/12 15:58:22 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    char *s;

	if (!(s = malloc(nmemb * size)))
		return (NULL);
	ft_bzero(s, nmemb * size);
	return (s);
}
