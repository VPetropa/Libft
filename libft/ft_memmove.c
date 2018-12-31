#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if (src < dest)
		memcpy(dest, src, len);
	else
	{
		while (i < len)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

int	main()
{
	char str[6] = "abcdef";
	char dst[3];

	//memmove(dst, str, 3);
	//ft_memmove(dst, str, 3);
	
	printf("my memmove %p\n", ft_memmove(dst, str, 8));
	return (0);
}
