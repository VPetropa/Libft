#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char *strsrc;
	size_t i;

	i = 0;
	strsrc = (unsigned char *)src;
	while (i < n)
	{
		if (*strsrc == (unsigned char)c)
			return ((unsigned char*)strsrc);
		*strsrc++;
		i++;
	printf("asd\n");
	}
	return (NULL);
}

int	main()
{
	unsigned char str[6] = "abcdef";

	//ft_memchr(str, 'c', 4);
	printf("my   memchr %p\n", ft_memchr(str, 'b', 1));
	printf("orig memchr %p\n", memchr(str, 'b', 1));
	return (0);
}
