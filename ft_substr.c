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
/*
int main(int argc ,char **argv) 
{
	if (argc != 4)
		return (1);
	size_t	len = (size_t)atoi(argv[3]);
	unsigned int	start = (unsigned int)atoi(argv[2]);
	
	printf("len value %lu | ",len);
	printf("start value %i \n ",start);
	
	char *ptr = ft_substr(argv[1], start, len);
	
	printf("len value %lu | ",len);
	printf("start value %i \n ",start);
    if (ptr != NULL) {
        printf("sous chaine %s\n | ",ptr);
        free(ptr);
    } else {
        printf("La sous-chaîne est NULL.\n");
    }

    return 0;
}*/