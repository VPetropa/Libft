#include "libft.h"

void	ft_strdel(char **as)
{
	if (*as != 0)
	{
		free(*as);
		*as = 0;
	}
}
