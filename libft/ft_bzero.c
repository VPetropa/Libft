#include "libft.h"

void	ft_bzero(void *src, size_t n)
{
	ft_memset(src, '\0', n);
}
