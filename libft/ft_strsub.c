#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	char *str;

	i = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == 0)
		return (0);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main ()
{
	char *s = "Veronica";
	printf("the string is %s\n", ft_strsub(s, 2, 3));
	return (0);
}
