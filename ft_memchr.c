/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:01:36 by eclark            #+#    #+#             */
/*   Updated: 2022/03/08 13:22:57 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	i;

	ptr = (unsigned char *)s;
	i = (unsigned char)c;
	while (*ptr != '\0')
	{
		if (*ptr == i)
		{
			return (ptr);
		}
		ptr++;
	}
	if (i == '\0')
	{
		return (ptr);
	}
	return ((unsigned char *) NULL);
}
/*
int main()
{
    char str[] = "hello";
    int c;
    c = '\0';
    char str2[] = "hello";
    int c2;
    c2 = '\0';
    char *a;
    char *b;
    a = ft_memchr(str, c, sizeof(str));
    b = memchr(str2, c2, sizeof(str2));
    printf("%s\n", a);
    printf("%s\n", b);
} */
