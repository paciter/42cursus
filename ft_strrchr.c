/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:11:10 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/13 19:12:34 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;

	i = ft_strlen(s);
    
    if (!s)
        return (NULL);
    while (i > 0)
    {
        
        if (s[i] == c)
            return ((char *)&s[i]);
         i--;
    }
    if (s[i] == c)
        return ((char *)&s[i]);
    else
         return (NULL);
}
/*
int main() {
    const char *str = "Hellq, world!";
    char *found = ft_strrchr(str, 'o');
    
    if (found != NULL) {
        printf("Le caractère 'o' a été trouvé à la position : %ld\n", found - str);
    } else {
        printf("Le caractère 'o' n'a pas été trouvé dans la chaîne.\n");
    }

    return 0;
}*/
