#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *str;

	str = malloc(size);
	
	if (str == 0)
		return (0);
	bzero(str, size); //to update to ft_bzero
	return (str);
}

int	main()
{
	printf("%p\n", ft_memalloc(0));
	return (0);
}
