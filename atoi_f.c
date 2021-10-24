/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:26:35 by lchristi          #+#    #+#             */
/*   Updated: 2021/10/23 18:03:29 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_dyp(int i, int k, const char *s)
{
	int	h;
	int	k1;

	h = 0;
	k1 = 0;
	while (s[i] >= 48 && s[i] <= 57)
	{
		k1 = k1 * 10 + s[i] - '0';
		i++;
		h++;
	}
	if (k == 1)
	{
		k1 = k1 * -1;
		h = h * -1;
	}
	if (h >= 19)
		return (-1);
	if (h <= -19)
		return (0);
	return (k1);
}

int	ft_atoi(const char *s)
{
	int	i;
	int	k;
	int	k1;

	i = 0;
	k = 0;
	k1 = 0;
	while (s[i] == 't' || s[i] == ' ' || s[i] == '\v' || s[i] == '\f' \
					|| s[i] == '\r' || s[i] == '\n')
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if ((s[i] == '-' && s[i + 1] <= 48 && s[i + 1] >= 57) \
						|| (s[i] == '+' && s[i + 1] <= 48 && s[i + 1] >= 57))
			return (0);
		if (s[i] == '-')
			k++;
		if (s[i] == '+')
			k1++;
		i++;
	}
	if (k + k1 > 1)
		return (0);
	k1 = ft_dyp(i, k, s);
	return (k1);
}
