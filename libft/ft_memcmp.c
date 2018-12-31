#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i]);
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

int main()
{
	unsigned char s1[8] = "baaaa";
	unsigned char s2[8] = "abaaa";

	printf("my  memcmp %d\n", ft_memcmp(s1, s2, 3));
	printf("Org memcmp %d\n", memcmp(s1, s2, 3));
	return (0);
}
