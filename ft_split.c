/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:19:13 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/14 15:43:06 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	j;
	size_t	wordcount;
	size_t	wordlen;

	wordcount = count_words(s, c);
	ptr = (char **)malloc(sizeof(char *) * (wordcount + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < wordcount)
	{
		while (s[j] && s[j] == c)
			j++;
		wordlen = 0;
		while (s[j + wordlen] && s[j + wordlen] != c)
			wordlen++;
		ptr[i++] = ft_substr(s, j, wordlen);
		j += wordlen;
	}
	ptr[i] = NULL;
	return (ptr);
}
