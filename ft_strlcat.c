/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:58:06 by eclark            #+#    #+#             */
/*   Updated: 2022/03/20 17:49:01 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	initial;
	size_t	final_size;

	initial = dstsize;
	final_size = ft_strlen(dst) + ft_strlen(src);
	while (*dst != 0 && dstsize > 0)
	{
		dst++;
		dstsize--;
	}
	if (dstsize == 0)
	{
		return (ft_strlen(src) + initial);
	}
	while (*src != 0 && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = 0;
	return (final_size);
}
