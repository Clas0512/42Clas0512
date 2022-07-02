/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anargul <anargul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 12:35:03 by anargul           #+#    #+#             */
/*   Updated: 2022/07/01 22:50:50 by anargul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)s + i) = '\0';
			i++;
	}
}
/*
int	main()
{
	char str1[] = "kadirberke";
	ft_bzero(str1, 5);
	write(1, str1, 3);
	write(1, str1, 6);
	printf("%c\n", str1[3]);
	printf("%s", (str1 + 5));
	return(0);
}
*/