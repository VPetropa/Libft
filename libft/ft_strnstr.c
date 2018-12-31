#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	size_t j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < n)
	{
		j = 0;
		while (haystack[i + j] != '\0' && i + j < n && needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}

int	main()
{
	char *hay = "assdfg";
	char *nee = "df";
	printf("adress is %p\n", ft_strnstr(hay, nee, 5));
	return (0);
}
