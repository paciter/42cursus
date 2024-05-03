/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:19:13 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/03 18:34:04 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static size_t lenword(const char *s, char c)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	while(s[i] == c)
	i++;
	while (s[i] != c && s[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}
char **ft_split(char const *s, char c)
{
	char	**ptr;
	size_t		i;
	size_t		j;
	size_t	wordnumber;
	size_t	lenmotact;
	
	wordnumber = count_words(s,c);
	i = 0;
	j = 0;

	ptr = (char **)malloc(sizeof(char *) * (wordnumber + 1));
	if (!ptr)
		return (NULL);
	while ( i < wordnumber)
	{
		while (s[j] == c)
			j++;
		lenmotact = lenword(&s[i], c);
		ptr[i] = ft_substr(ptr[i], *s, lenmotact + 1);
        	if (!ptr[i])
            		return NULL;
        j += lenmotact;
        i++;
    }
    ptr[i] = NULL;
    return ptr;
}
