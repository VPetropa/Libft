#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t i;

	i = 0;
	while(*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main()
{
	char *s1 = "-1";
	char *s2 = "bbcde";
	printf("diff is %d\n", ft_strcmp(s1, s2));
	printf("org  is %d\n", strcmp(s1, s2));
	return (0);
}
