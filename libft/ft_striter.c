#include "libft.h"

int     ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		f(s+i);
		i++;
	}
}

int	main()
{
	char *str = "aAaAa";

	void *f = ft_tolower(str[2]);
	printf("the str is %s\n", str);
	ft_striter(str, f);
	printf("the new string is %s\n", str);
	return (0);
}
