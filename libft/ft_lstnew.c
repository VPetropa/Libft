#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	
	new = (t_list *)malloc(sizeof(t_list) * 1);
	if (new == 0)
		return (0);

	if (content == 0)
	{
		new->content = 0;
		new->content_size = 0;
	}
	else
	{
		new->content = malloc(content_size);
		if (new->content == 0)
			return (0);
		ft_memmove(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = 0;
	return (new);
}
