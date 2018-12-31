#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *hay;
	const char *nee;

	while (*haystack)
	{
		hay = (char *)haystack;
		nee = (char *)needle;
		while (*hay == *nee && *nee != '\0')
		{
			hay++;
			nee++;
		}
		if (*nee == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}

int	main()
{
	char *hey = "Hello world";
	char *nee = "w";

	printf("my  strstr %p\n", ft_strstr(hey, nee));
	printf("org strstr %p\n", strstr(hey, nee));
	return (0);
}
