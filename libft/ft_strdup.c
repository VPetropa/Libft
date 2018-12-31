#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t i;
	char *str;

	i = strlen(s) + 1; //change to ft_strlen
	if (!(str = ((char *)malloc(sizeof(char) * i))))
	{
		printf("we return 0\n");
		return (0);
	}
	strcpy(str, s); //change to ft_strcpy
	return (str);
}

int	main()
{
	const char s[7] = "abcdefg";
	printf("my strdup %s\n", ft_strdup(s));
	printf("or strdup %s\n", strdup(s));
	return (0);
}
