/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:08:07 by lchristi          #+#    #+#             */
/*   Updated: 2021/10/24 17:27:45 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_index(int *i, int *sign, int *s);
static int	ft_body(const char *nptr, int i, int s, int sign);

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	s;

	ft_index(&i, &sign, &s);
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '-' \
					|| nptr[i] == '+' || nptr[i] == '\n' || nptr[i] == '\r' \
					|| nptr[i] == '\v' || nptr[i] == '\f')
	{
		if (nptr[i] == '-')
		{
			sign *= -1;
			if (nptr[i + 1] < 48 || nptr[i + 1] > 57)
				return (0);
		}
		if (nptr[i] == '+')
		{
			if (nptr[i + 1] < 48 || nptr[i + 1] > 57)
				return (0);
		}
		i++;
	}
	return (ft_body(nptr, i, s, sign));
}

static int	ft_body(const char *nptr, int i, int s, int sign)
{
	long int	sum;

	sum = 0;
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		sum = sum * 10 + (nptr[i] - '0');
		i++;
		s++;
	}
	if (s * sign >= 19)
		return (-1);
	if (s * sign <= -19)
		return (0);
	return (sum * sign);
}

static void	ft_index(int *i, int *sign, int *s)
{
	*i = 0;
	*sign = 1;
	*s = 0;
}
