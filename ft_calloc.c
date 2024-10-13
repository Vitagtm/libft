/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgetman <vgetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:37:24 by vgetman           #+#    #+#             */
/*   Updated: 2024/10/11 12:28:38 by vgetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *temp;
	size_t i;
	i = 0;
	temp = malloc(count * size);

	if (!temp)
		return (NULL);
	while (i < count * size)
	{
		temp[i++] = 0;
	}
	return (temp);
}