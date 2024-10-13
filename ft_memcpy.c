/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgetman <vgetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:11:05 by vgetman           #+#    #+#             */
/*   Updated: 2024/10/11 12:29:55 by vgetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *temp_dest;
	char *temp_src;
	size_t i;

	temp_dest = (char *)dest;
	temp_src = (char *)src;
	i = 0;

	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return (dest);
}