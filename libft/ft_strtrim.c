#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *str;
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 0;
	l = 0;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	k = i;
	while ((s[i + j] != ' ' || s[i + j] != '\t' || s[i + j] != '\n') && s[i + j] != '\0')
	{
		printf("we are in loop\n");
		fflush(stdout);
		if ((s[i + j + 1] == ' ' || s[i + j + 1] == '\t' || s[i + j + 1] == '\n') && s[i + j + 1] != '\0')
			i++;
		j++;
	}
	printf("count is %d %d\n", j, i);
	fflush(stdout);
	str = (char *)malloc(sizeof(char) * j + 1);
	while (l < j)
		str[l++] = s[k++];
	str[l] = '\0';
	return (str);
}

int	main()
{
	char *s = "   Hello World   ";
	printf("%s\n", ft_strtrim(s));
	return (0);
}
