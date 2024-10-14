/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgetman <vgetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:20:57 by vgetman           #+#    #+#             */
/*   Updated: 2024/10/11 13:45:51 by vgetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free_word(char **total_words)
{
	int	i;

	i = 0;
	while (total_words[i])
	{
		free(total_words[i]);
		i++;
	}
	free(total_words);
	return (NULL);
}

int	ft_wordcount(char const *s, char c)
{
	size_t	i;
	int		wc;

	wc = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			wc++;
		}
		if (*s == c)
			i = 0;
		s++;
	}
	return (wc);
}


char	**ft_split(char const *s, char c)
{
	int		i;
	char	**totalword;
	int		start;
	int		end;

	i = 0;
	start = 0;
	end = 0;
	totalword = ft_calloc(ft_wordcount(s, c) + 1, sizeof(char *));
	if (!totalword)
		return (NULL);
	while (i < ft_wordcount(s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		totalword[i++] = ft_strdup(s, start, end - start);
		if (!totalword[i])
			return (ft_free_word(totalword));
		start = end;
	}
	totalword[i] = NULL;
	return (totalword);
}

/*void main()
{
	char *s = "   hola   Mundo   ";
	int i = 2;
	char ** doublearray = split(s, " ");

	while(i < 2)
	{
		printf(">%s|\n", doublearray[i++]);
	}
	return (0);

}*/