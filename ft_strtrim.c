/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgetman <vgetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:34:39 by vgetman           #+#    #+#             */
/*   Updated: 2024/10/11 12:32:57 by vgetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	setcheck(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed;
	int		i;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (setcheck(set, s1[start]) && s1[start])
		start++;
	while (setcheck(set, s1[end]) && (end >= start))
		end--;
	trimmed = ft_calloc(end - start + 2, sizeof(char));
	if (!trimmed)
		return (NULL);
	while (i <= (end - start))
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	return (trimmed);
}
