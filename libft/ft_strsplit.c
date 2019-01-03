#include "libft.h"

int	ft_count(char const *str, char sc)
{
	int		i;
	int		c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		while (str[i] == sc)
			i++;
		if (str[i] != '\0')
			c++;
		while (str[i] != '\0' && str[i] != sc)
			i++;
	}
	return (c);
}

int	ft_wlen(char const *str, char sc)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		while (str[i] == sc)
		{
			i += 1;
		}
		while (str[i] != '\0' && str[i] != sc)
		{
			len += 1;
			i++;
		}
		return (len);
	}
	return (0);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
		str[n] = '\0';
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	char **array;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	array = (char **)malloc(sizeof(char *) * ft_count(s, c) + 1);
	if (array == 0)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (k < ft_count(s, c))
		{
			array[k] = (ft_strndup(s + j, ft_wlen(s, c)));
			k++;
		}
	}
	array[k] = '\0';
	return (array);
}
