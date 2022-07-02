/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anargul <anargul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 00:45:22 by anargul           #+#    #+#             */
/*   Updated: 2022/07/02 01:39:50 by anargul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*new_s;

	i = 0;
	if (!s1 || !s2)
		return (0);
	new_s = malloc((sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new_s == 0)
		return (0);
	while (*s1)
		new_s[i++] = *s1++;
	while (*s2)
		new_s[i++] = *s2++;
	new_s[i] = 0;
	return (new_s);
}
/*
int main()
{
	char const	*f = "adem";
	char const	*s = "berke";

	printf("%s\n", ft_strjoin(f, s));
	printf("%lu", ft_strlen((ft_strjoin(f, s))));
}
*/