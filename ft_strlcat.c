/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anargul <anargul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:27:04 by anargul           #+#    #+#             */
/*   Updated: 2022/07/01 22:46:24 by anargul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dsize;
	size_t	ss;

	ss = dstsize;
	dsize = 0;
	while (dst[dsize] != '\0' && dsize < ss)
		dsize++;
	i = dsize;
	while (src[dsize - i] && dsize + 1 < ss)
	{
		dst[dsize] = src[dsize - i];
		dsize++;
	}
	if (i < ss)
		dst[dsize] = '\0';
	return (i + ft_strlen(src));
}
/*
int main()
{
	char	d[] = "adem";
	const char	s[] = "berke";

	printf("%zu\n", ft_strlcat(d, s, 3));
	printf("%c\n", d[5]);
	return (0);
}
*/