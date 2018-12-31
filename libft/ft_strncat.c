#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

int	main()
{
	char str[6] = "Hello";
	char dst[4] = "Isay";

	//printf("ori strncat %s\n", strncat(dst, str, 20));
	printf("my  strncat %s\n", ft_strncat(dst, str, 20));
	return (0);
}
