/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgetman <vgetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:00:47 by vgetman           #+#    #+#             */
/*   Updated: 2024/10/11 12:30:18 by vgetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	char *aux_str;

	i = 0;
	aux_str = (char *)s;

	while (i < n)
	{
		aux_str[i] = c;
		i++;
	}
	return (s);
}