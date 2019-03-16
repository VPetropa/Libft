/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetropa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 14:19:52 by vpetropa          #+#    #+#             */
/*   Updated: 2019/01/05 21:39:09 by vpetropa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *hay;
	const char *nee;

	if (needle[0] == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		hay = (char *)haystack;
		nee = (char *)needle;
		while (*hay == *nee && *nee != '\0')
		{
			hay++;
			nee++;
		}
		if (*nee == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
