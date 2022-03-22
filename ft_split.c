/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:16:59 by eclark            #+#    #+#             */
/*   Updated: 2022/03/22 16:41:34 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *s, char c)
{
	size_t	word_count;
	int		skip;

	word_count = 0;
	skip = 1;
	while (*s)
	{
		if (*s != c && skip)
		{
			skip = 0;
			word_count++;
		}
		else if (*s == c)
			skip = 1;
		s++;
	}
	return (word_count);
}

static char	*wordcpy(char const*s, int start, int end)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (end - start));
	while (start < end)
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		x;
	char	**array;

	if (!s)
		return (0);
	array = malloc(sizeof(char *) * (wordcount(s, c) + 1));
	i = 0;
	j = 0;
	x = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && x < 0)
			x = i;
		else if ((s[i] == c || i == ft_strlen(s)) && x >= 0)
		{
			array[j++] = wordcpy(s, x, i);
			x = -1;
		}
		i++;
	}
	array[j] = 0;
	return (array);
}
