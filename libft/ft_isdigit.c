#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main()
{
	int c = 'a';
	printf("my  isdigit %d\n", ft_isdigit(c));
	printf("org isdigit %d\n", isdigit(c));
	return (0);
}
