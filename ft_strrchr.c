/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anargul <anargul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 04:16:33 by anargul           #+#    #+#             */
/*   Updated: 2022/07/01 22:50:31 by anargul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (*s != '\0' && *s != c)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
/*
int main()
{
    const char str[] = "galatasaray";
    char ch = 'a';
    printf("%s", ft_strrchr(str, ch));
}
*/
