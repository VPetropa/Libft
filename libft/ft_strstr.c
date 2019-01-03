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
