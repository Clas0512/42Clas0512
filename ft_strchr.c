/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anargul <anargul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 16:17:58 by anargul           #+#    #+#             */
/*   Updated: 2022/06/26 16:18:00 by anargul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (0);
}
/*
int main()
{
   const char str[] = "galatasaray";
   char ch = 'a';
   printf("%s", ft_strchr(str, ch));
}
*/