/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:24:49 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/03 15:23:57 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *strchr(const char *s, int c){
	size_t	i;

	i = 0;
	while (s[i])
	{
		if(s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (i == '\0')
		return((char *)&s[i]);
	return(0);
}
/*
int main() {
    const char *str = "Hello, world!";
    char *found = ft_strchr(str, 'o');
    
    if (found != NULL) {
        printf("Le caractère 'o' a été trouvé à la position : %ld\n", found - str);
    } else {
        printf("Le caractère 'o' n'a pas été trouvé dans la chaîne.\n");
    }

    return 0;
}*/