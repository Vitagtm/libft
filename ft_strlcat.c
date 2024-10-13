/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgetman <vgetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:38:06 by vgetman           #+#    #+#             */
/*   Updated: 2024/10/11 12:31:50 by vgetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	dsrc;

	i = 0;
	dlen = ft_strlen(dst);
	dsrc = ft_strlen(src);
	if (dlen >= size)
		return (size + dsrc);
	while (i + dlen + 1 < size && src[i])
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + dsrc);
}
