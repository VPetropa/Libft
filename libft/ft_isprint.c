#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	main()
{
	int c = 34;

	printf("my  isprint %d\n", ft_isprint(c));
	printf("org isprint %d\n", isprint(c));
	return (0);
}
