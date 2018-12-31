#include "libft.h"
#include <string.h>
#include <stdio.h>

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

int	main()
{
	char src[6] = "aabbcc";
	char dst[3];
	
	printf("%p", memccpy(dst, src, 'a', 3));
//	printf("original memccpy %s\n", );
//	ft_memccpy(dst, src, 'a', 3);
//	printf("my memccpy %s\n", dst);
	return (0);
}
