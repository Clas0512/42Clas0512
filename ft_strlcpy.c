/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anargul <anargul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 04:15:19 by anargul           #+#    #+#             */
/*   Updated: 2022/07/01 21:30:05 by anargul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, int dstsize)
{
	int	srcsize;
	int	i;
	int	a;

	while (src[a])
		a++;
	if (!dst || !src)
		return (0);
	srcsize = a;
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
/*
int main()
{
    char d[] = "bugra";
    char s[] = "ce";
    ft_strlcpy(d, s, 5);
    printf("d is: %s\n", d);
    printf("s is: %s", s);
}
*/
