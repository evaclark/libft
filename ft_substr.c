/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:22:07 by eclark            #+#    #+#             */
/*   Updated: 2022/03/08 21:15:05 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	str = malloc(sizeof(s) * len);
	if (str == NULL)
		return (NULL);
	while (len--)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/*
int main()
{
    char    s[] = "abcdefghijk";
    int start = 7;
    size_t i;
    i = 4;
    printf("%s\n", ft_substr(s, start, i));
}
*/
