#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main()
{
	char src[5] = "asdf";
	char dest[5];

	printf("my  strncpy %s\n", ft_strncpy(dest, src, 7));
	printf("org strncpy %s\n", strncpy(dest, src, 7));
	return (0);
}
