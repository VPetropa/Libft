#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	a;
	int	i;

	a = (char)c;
	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == a)
		{
			tmp = (char *)s + i;
			return (tmp);
		}
		i--;
	}
	return (0);
}

int	main()
{
	int c = 'c';
	char *str = "abdfdcd";

	printf("my  strrchr %p\n", ft_strrchr(str, c));
	printf("org strrchr %p\n", strrchr(str, c));
	return (0);
}
