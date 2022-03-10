/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:58:06 by eclark            #+#    #+#             */
/*   Updated: 2022/03/08 15:51:26 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srcsize;

	i = 0;
	if (dstsize > 0)
	{
		while (dst[i] != '\0')
		{
			i++;
		}
		j = 0;
		while (src[j] != '\0')
		{
			dst[i + 1] = src[j];
			j++;
			i++;
		}
	}
	dst[i + 1] = '\0';
	srcsize = ft_strlen(src);
	return (srcsize);
}

/*
int main(int argc, char **argv)
{
    (void)argc;
    ft_strlcat(argv[0], argv[1], 10);
    strlcat(argv[2], argv[3], 10);
    printf("%s\n", argv[0]);
    printf("%s\n", argv[2]);
    return 0;
}
*/
