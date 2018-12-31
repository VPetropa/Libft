#include "libft.h"

void	ft_strdel(char **as)
{
	if (*as != 0)
	{
		free(*as);
		*as = 0;
	}
}

int	main()
{
	int i = 0;
	int j = 0;

	char **as;
	as[0][1] = 'a';
	as[1][1] = 'b';
	printf("the str is %s %s\n", as[0], as[1]);
	ft_strdel(as);
	printf("the new str is %s %s\n", as[0], as[1]);
	return (0);
}
