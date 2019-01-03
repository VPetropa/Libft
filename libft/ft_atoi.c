#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\f' || *str == '\v' || *str == '\n')
		*str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		*str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = (nbr * 10) + (*str - '0');
		*str++;
	}
	return (nbr * sign);
}
