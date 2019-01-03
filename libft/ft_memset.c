#include "libft.h"

void	*ft_memset(void *src, int c, size_t len)
{
	size_t i;
	unsigned char *dest;

	i = 0;
	dest = (unsigned char *)src;
	while (i < len)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
