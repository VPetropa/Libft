#include "libft.h"
#include "unistd.h"

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
	printf("words are %d\n", c);
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
		printf("len e %d\n", len);
		fflush(stdout);
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
	str = strncpy(str, s, n); // to update to ft_strncpy!!!
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

void	ft_putchar(char c) // to dell

{
	write (1, &c, 1);
}

void	ft_print_words_tables(char **tab) // to dell
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			ft_putchar(tab[i][j++]);
		}
		ft_putchar('\n');
		i++;
	}
}

int	main ()
{
	char const *s = "hello***world******bobjo";
	char c = '*';

	ft_print_words_tables(ft_strsplit(s, c));
	return (0);
}


