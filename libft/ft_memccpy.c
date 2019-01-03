#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *strdst;
	char *strsrc;

	strdst = (char *)dst;
	strsrc = (char *)src;
	while (n != 0)
	{
		*strdst = *strsrc;
		strdst++;
		if (*strsrc == (char)c)
			return ((void *)strdst);
		strsrc++;
		n--;
	}
	return (0);
}
