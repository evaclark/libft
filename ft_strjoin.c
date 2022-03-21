/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 23:05:57 by eclark            #+#    #+#             */
/*   Updated: 2022/03/17 12:09:19 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		t_len;
	char	*ptr;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	t_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc(sizeof(char) * (t_len));
	if (ptr == NULL)
		return (NULL);
	while (*s1)
		ptr[i++] = *s1++;
	while (*s2)
		ptr[i++] = *s2++;
	ptr[t_len - 1] = '\0';
	return (ptr);
}
