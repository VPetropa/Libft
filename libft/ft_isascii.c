#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main()
{
	int c = -15;

	printf("my  isascii %d\n", ft_isascii(c));
	printf("org isascii %d\n", isascii(c));
	return (0);
}
