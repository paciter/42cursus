/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:12:17 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/03 15:23:44 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *sdup;
	unsigned char oc;

	sdup =	(unsigned char *)s;
	oc =	(unsigned char)c;
	i = 0;
	

	
	while (i < n)
	{
		if (sdup[i] == oc)
            return (&sdup[i]);
		i++;
	}
	return (0);
}
/*
int main() {
    const char *str = "Hell, wrld!";
    char *found = ft_memchr(str, '\0', 13); // Recherche dans les 13 premiers caractères de la chaîne

    if (found != NULL) {
        printf("Le caractère 'o' a été trouvé à la position : %ld\n", found - str);
    } else {
        printf("Le caractère 'o' n'a pas été trouvé dans les 13 premiers caractères de la chaîne.\n");
    }

    return 0;
}
*/