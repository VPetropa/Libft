#include <stdio.h>
#include <string.h>
//#include "libft.h"

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

int	main()
{
	char str[5] = "abcde";
	printf("before memset %s\n", str);

	memset(str + 2, '.',2*sizeof(char));
	printf("after memset %s\n", str);
	ft_memset(str+3,'@',1);
	fflush(stdout);
	printf("after MY memse %s\n", str);
	return (0);
}
