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

char   *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    i;
    size_t    j;
    char    *str;
    
    if (s == NULL || *s == '\0')
        return NULL;

    str = (char*)malloc(sizeof(char) * (len + 1));
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

