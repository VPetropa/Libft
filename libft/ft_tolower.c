#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

int	main()
{
	int c = 'z';

	printf("my  f %d\n", ft_tolower(c));
	printf("org f %d\n", tolower(c));
	return (0);
}
