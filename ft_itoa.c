/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgetman <vgetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:38:42 by vgetman           #+#    #+#             */
/*   Updated: 2024/10/11 12:50:11 by vgetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countint(long num)
{
	int	total;

	total = 0;
	if (num == 0)
		total++;
	if (num < 0)
	{
		total++;
		num *= -1;
	}
	while (num > 0)
	{
		num /= 10;
		total++;
	}
	return (total);
}
char	*ft_itoa(int n)
{
	char	*num;
	int		len;
	long	nbr;

	nbr = (long)n;
	len = ft_countint(nbr);
	num = (char *)malloc(len + 1);
	if (!num)
		return (NULL);
	if (nbr == 0)
		num[0] = '0';
	if (nbr < 0)
	{
		num[0] = '-';
		nbr *= -1;
	}
	num[len] = '\0';
	while (nbr > 0)
	{
		len--;
		num[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (num);
}
