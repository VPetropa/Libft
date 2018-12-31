#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' || s2 [i] != '\0' && s1[i] == s2[i] || i < n)
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	else
		return (0);
}

int		ft_strnequ2(char const *s1, char const *s2, size_t n)
{
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (!strncmp(s1, s2, n))
		return (1);
	return (0);
}

int	main()
{
	char *s1 = "aaaa";
	char *s2 = "aaaa";
	printf("%d\n", ft_strnequ(s1, s2, 3));
	printf("original %d\n", ft_strnequ2(s1, s2, 3));
	return (0);
}
