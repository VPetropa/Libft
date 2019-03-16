/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetropa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 14:42:48 by vpetropa          #+#    #+#             */
/*   Updated: 2019/01/05 19:17:45 by vpetropa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (f == 0)
		return ;
	if (lst)
	{
		f(lst);
		if (lst->next)
			ft_lstiter(lst->next, f);
	}
}
