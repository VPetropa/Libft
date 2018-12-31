#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;
	size_t i;

	i = 0;
	str = (char *)malloc(sizeof(char) * size + 1);
	if (str == 0)
		return (0);
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

int 	main()
{
	printf("%p\n", ft_strnew(5));
	return (0);
}
