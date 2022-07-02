/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anargul <anargul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 21:45:47 by anargul           #+#    #+#             */
/*   Updated: 2022/07/01 22:50:55 by anargul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int b)
{
	return (ft_isdigit(b) || ft_isalpha(b));
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n",ft_isalnum('~'));
	printf("%d\n",ft_isalnum('!'));
	printf("%d",ft_isalnum('1'));
}
*/
