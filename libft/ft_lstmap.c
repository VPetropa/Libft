#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlist;

	if (lst != 0 && f != 0)
	{
		newlist = f(lst);
		if (newlist != 0 && lst->next != 0)
			newlist->next = ft_lstmap(lst->next, f);
		return (newlist);
	}
	return (0);
}
