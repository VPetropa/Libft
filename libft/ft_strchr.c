#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (const char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (0);
}

int	main()
{
	char *str = "abcd";
	char c = 'v';

	printf("the adress is %p\n", ft_strchr(str, c));
	printf("the adress is %p\n", strchr(str, c));
	return (0);
}
