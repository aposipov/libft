#include "libft.h"

//void	ft_index(int i, int sign, long int sum, int s);
int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	long int	sum;
	int	s;

	s = 0;
	sum = 0;
	i = 0;
	sign = 1;
	//ft_index(i, sign, sum, s);
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

//void	ft_index(int i, int sign, long int sum, int s)
//{
//	i = 0;
//	sign = 0;
//	sum = 0;
//	s = 0;
//	return (0);
//}
