#include "libft.h"

char	*ft_strcpy(char	*dest, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char src[6] = "Hello";
	char dest[5];

	printf("org Strcpy %s\n", strcpy(dest, src));
	printf("my  strcpy %s\n", ft_strcpy(dest, src));
	return (0);
}
