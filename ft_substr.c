/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:05:52 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/03 15:24:07 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    i;
    size_t    j;
    char    *str;
    
    if (s == NULL || *s == '\0')
        return NULL;

    str = (char*)malloc(sizeof(*s) * (len + 1));
    if (!str)
        return (NULL);
    i = start;
    j = 0;
    while (s[i] && j < len)
    {
       str[j] = s[i];
       j++;
       i++;
    }

    str[j] = '\0';
    return (str);
}
/*
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	
	i = 0;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	
	if(!s)
		return (NULL);
	
	if (start < 0)
		return (NULL);
	
	if (ft_strlen(s) - (size_t)start < len)
		return (NULL);
	
	if ((size_t)start > strlen(s) - 1)
		return (NULL);
	
	while (i < len)
	{
		ptr[i] = s[(size_t)start  + i];
		i++; 
	}
		ptr[i] = '\0';
	
	return (ptr);
}
*/
        printf("La sous-chaîne est NULL.\n");
    }

    return 0;
}*/
