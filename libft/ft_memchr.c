/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetropa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 14:40:47 by vpetropa          #+#    #+#             */
/*   Updated: 2019/01/05 21:21:55 by vpetropa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*strsrc;
	size_t			i;

	strsrc = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (strsrc[i] == (unsigned char)c)
			return ((void *)strsrc + i);
		i++;
	}
	return (0);
}
