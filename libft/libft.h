#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <unistd.h>

typedef struct	s_list
{
	void		*content;
	size_t		constant_size;
	struct s_list	*next;
}		t_list;

void	*ft_memset(void *a, int c, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n); 
size_t  ft_strlen(const char *str);


#endif 
