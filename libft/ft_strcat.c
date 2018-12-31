#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	int i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
	{
		dest[i] = *src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char src[5] = "asdf";
	char dest[7] = "as";

	printf("my  strcat %s\n", ft_strcat(dest, src));
	printf("org strcat %s\n", strcat(dest, src));
	return (0);
}
