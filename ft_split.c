/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:16:59 by eclark            #+#    #+#             */
/*   Updated: 2022/03/21 13:37:52 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	j = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
		{
			j = 1;
			i++;
			word++;
		}
		else if (s[i] == c)
		{
			j = 0;
		}
		i++;
	}
	return (word);
}

static char	*wordcpy(char const *s, int start, int end)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (end - start + 1));
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

	array = malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!s || !array)
		return (0);
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

/*int main()
{
	char *str = "hello my name is beans";
	char c;
	c = 'l';
	char **res = ft_split(str, c);
	for (int i = 0; i < wordcount(str, c); i++)
	{
		printf("%s\n", res[i]);
	}
}*/
