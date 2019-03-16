/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetropa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 14:35:35 by vpetropa          #+#    #+#             */
/*   Updated: 2019/01/05 21:16:27 by vpetropa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*strdst;
	const char	*strsrc;

	strdst = dst;
	strsrc = src;
	while (n > 0)
	{
		*strdst++ = *strsrc++;
		n--;
	}
	return (dst);
}
