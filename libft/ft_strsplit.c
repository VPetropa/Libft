/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetropa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 17:34:00 by vpetropa          #+#    #+#             */
/*   Updated: 2019/01/05 19:50:12 by vpetropa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_len_c_stop(const char *str, int start, char c_stop)
{
	size_t		counter;

	if (!str)
		return (0);
	counter = 0;
	while (str[start] && (str[start] != c_stop))
	{
		start++;
		counter++;
	}
	return (counter);
}

static int			ft_split_count(char *str, char c)
{
	int		count_word;
	int		counter;

	counter = 0;
	count_word = 0;
	while (str[counter])
	{
		if (str[counter] != c && str[counter] != '\0')
			count_word++;
		while (str[counter + 1] != '\0' && str[counter] != c)
			counter++;
		counter++;
	}
	return (count_word);
}

char				**ft_strsplit(char const *s, char c)
{
	int				i;
	unsigned int	counter;
	char			**array_s;
	char			*str;

	if (s == 0)
		return (NULL);
	str = (char *)s;
	array_s = (char**)ft_memalloc(sizeof(char*) * (ft_split_count(str, c) + 1));
	if (array_s == 0)
		return (0);
	counter = 0;
	i = 0;
	while (i < ft_split_count(str, c))
	{
		while ((str[counter] == (char)c) && str[counter])
			counter++;
		array_s[i] = ft_strsub(str, counter, ft_len_c_stop(str, counter, c));
		while ((str[counter] != (char)c) && str[counter])
			counter++;
		i++;
	}
	array_s[i] = 0;
	return (array_s);
}
