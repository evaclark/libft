/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:04:38 by eclark            #+#    #+#             */
/*   Updated: 2022/03/17 15:26:33 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cdst;
	unsigned char	*csrc;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	if (csrc > cdst)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (len > 0)
		{
			len--;
			cdst[len] = csrc[len];
		}
	}
	return (dst);
}
