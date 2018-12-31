#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (*s1 && *s2 && *s1 == *s2 && i < n)
	{
		*s1++;
		*s2++;
		i++;
	}
	return (*s1-*s2);
}

int	main()
{
	char *s1 = "aaaa";
	char *s2 = "aaaa";
	printf("my  func %d\n", ft_strncmp(s1, s2, 0));
	printf("org func %d\n", strncmp(s1, s2, 0));
	return (0);
}
