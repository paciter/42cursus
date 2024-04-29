/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:52:45 by rufaccia          #+#    #+#             */
/*   Updated: 2024/04/29 19:04:31 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
void *memmove(void *dest, const void *src, size_t n)
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
	else
	{
		while (n > 0)
		{
			tmpdest[i - 1] = tmpsrc[i - 1];
			n--;
		}
	}
	return (dest);
}
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < n)
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
			j = 0;
		}	
		i++;
	}
	return (NULL);
}

int main() {
    char src[] = "Hello, world!";
    char dest[10];

    // Copie avec la fonction memmove
    memmove(dest, src, 5);

    // Affichage du résultat
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}