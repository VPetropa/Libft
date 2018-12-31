#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main()
{
	int c = '-';

	printf("my  isalnum %d\n", ft_isalnum(c));
	printf("org isalnum %d\n", isalnum(c));
	return (0);
}
