/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetropa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 14:26:30 by vpetropa          #+#    #+#             */
/*   Updated: 2019/01/05 21:24:32 by vpetropa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*str;

	i = ft_strlen(s1) + 1;
	if (!(str = ((char *)malloc(sizeof(char) * i))))
	{
		return (0);
	}
	ft_strcpy(str, s1);
	return (str);
}
