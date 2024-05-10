/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:52:45 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/10 13:24:14 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmpsrc;
	char	*tmpdest;

	tmpsrc = (char *)src;
	tmpdest = (char *)dest;
	i = 0;
	if(tmpdest < tmpsrc)
	{
		while (i < n)
		{
			tmpdest[i] = tmpsrc[i];
			i++;
		}
	}
	else if (tmpdest > tmpsrc)
	{
		i = n;
    	while (i > 0)
    	{
        	tmpdest[i - 1] = tmpsrc[i - 1];
        	i--;
    	}
	}
	return (dest);
}
/*
int main() {
    char src[] = "Hello, world!";
    char dest[10];

    // Copie avec la fonction memmove
    memmove(dest, src, 5);

    // Affichage du résultat
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}*/