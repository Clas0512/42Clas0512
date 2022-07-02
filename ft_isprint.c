/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anargul <anargul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:57:41 by anargul           #+#    #+#             */
/*   Updated: 2022/06/25 18:27:17 by anargul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int b)
{
	return (32 <= b && b <= 126);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n",ft_isprint('1'));
	printf("%d\n",ft_isprint(' '));
	printf("%d",ft_isprint('\n'));
}
*/
