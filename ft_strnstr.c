/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anargul <anargul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 04:16:01 by anargul           #+#    #+#             */
/*   Updated: 2022/07/01 22:50:28 by anargul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t h;
	size_t n;

	h = 0;
	if (needle[0] == '\0')//needle'ın boş olup olmadığını kontrol eder
		return ((char *)haystack);//eğer boşsa haystack'i aynen döner
	while (haystack[h] != '\0')//haystack nulla gelene kadar
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)//sınırlayıcıyı geçmezse ve haystack ile needle ın karakterleri eşitse
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)&haystack[h]);
			n++;
		}
		if (needle[n] == '\0')//needle'ın bitmesi durumunda
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}
/*
int main()
{
	const char	s[] = "samanlik";
	const char	i[] = "anl";

	printf("%s", ft_strnstr(s, i, 10));
}
*/h
