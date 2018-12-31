#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int	main()
{
	int c = 'Z';
	printf("my  toupper %d\n", ft_toupper(c));
	printf("org toupper %d\n", toupper(c));
	return (0);
}
