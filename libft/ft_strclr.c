#include "libft.h"

void	ft_strclr(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}

int	main()
{
	char *s = "aabaa";
	//printf("%p %s\n", s, s);
	ft_strclr(s);
	printf("%p \n", s);
	return (0);
}
