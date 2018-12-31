#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = 0;
	return (i + strlen(src));
}

int main()
{
	char *str = "AAA";
	char *dst = "BBB";

	printf("my  %ld\n", ft_strlcat(dst, str, 1));
	//printf("org %d\n", strlcat(dst, str, 2));
	return (0);
}
