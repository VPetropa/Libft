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
	}
	return (NULL);
}
