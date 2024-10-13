/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgetman <vgetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:54:52 by vgetman           #+#    #+#             */
/*   Updated: 2024/10/11 12:30:09 by vgetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// No funciona
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*aux_dest;
	char	*aux_source;

	aux_source = (char *)src;
	aux_dest = (char *)dest;
	i = 0;
	if (aux_source < aux_dest)
	{
		i = n - 1;
		while (i < n)
		{
			aux_dest[i] = aux_source[i];
			i--;
		}
	}
	else if (aux_source > aux_dest)
	{
		while (i < n)
		{
			aux_dest[i] = aux_source[i];
			i++;
		}
	}
	return (dest);
}
