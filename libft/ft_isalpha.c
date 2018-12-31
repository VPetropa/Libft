#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	main()
{
	int c = 'c';

	printf("is alpha %d\n", ft_isalpha(c));
	printf("orfaplha %d\n", isalpha(c));
	return (0);
}
