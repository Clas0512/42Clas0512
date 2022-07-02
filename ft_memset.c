/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anargul <anargul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:45:15 by anargul           #+#    #+#             */
/*   Updated: 2022/07/01 23:11:19 by anargul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*
int	main()
{
	size_t len = 2;
	unsigned char str[] = "galatasaray";
	printf("%s",ft_memset(str, 'X', len));
}
*/