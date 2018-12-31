#include "libft.h"
#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *strdest;
	const char *strsrc;

	strdest = dest;
	strsrc = src;
	while(n > 0)
	{
		*strdest++ = *strsrc++;
		n--;
	}
	return(dest);
}

//int	main()
//{
//	char str[5] = "abcde";
//	char dest[3];

	//memcpy(dest, str, 3);
	//printf("original memcpy %s\n", dest);
//	ft_memcpy(dest, str, 3);
//	printf("my memcpy %s\n", dest);
//	return (0);
//}
