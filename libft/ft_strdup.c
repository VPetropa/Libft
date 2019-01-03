#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t i;
	char *str;

	i = ft_strlen(s) + 1;
	if (!(str = ((char *)malloc(sizeof(char) * i))))
	{
		return (0);
	}
	ft_strcpy(str, s);
	return (str);
}
