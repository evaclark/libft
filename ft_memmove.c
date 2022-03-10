/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:04:38 by eclark            #+#    #+#             */
/*   Updated: 2022/03/08 15:14:48 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*cdst;
	unsigned char	*csrc;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	i = 0;
	if (csrc > cdst)
	{
		while (i < len)
		{
			ft_memcpy(dst, src, len);
		}
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
/*
int main()
{
    unsigned char src[] = ":3";
    unsigned char dest[] = "heeeeeyya";
    unsigned char src2[] = "what";
    unsigned char dest2[] = "heeeeeyya";
    char *e1 = ft_memmove(dest, src, sizeof(src));
    char *e2 = memmove(dest2, src2, sizeof(src2));
    printf("%s\n", e1);
    printf("%s\n", e2);
}
*/
