/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anargul <anargul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 04:33:19 by anargul           #+#    #+#             */
/*   Updated: 2022/07/01 21:28:20 by anargul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	}
	return (dst);
}
/*
int main()
{
    unsigned char   s[] = "patateslerin"; 
    printf("%s", ft_memmove(s + 2, s, 3));
    return (0);
}
*/