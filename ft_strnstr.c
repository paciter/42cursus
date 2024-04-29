/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:48:38 by rufaccia          #+#    #+#             */
/*   Updated: 2024/04/29 19:21:16 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

/*
char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	big_len;

	big_len = 0;	
	j = 0;
	i = 0;
	
	if (*little == '\0')
		return((char *)big);

	if (*little > *big) // Si la sous-chaîne est plus grande que la chaîne principale, impossible de la trouver
        return NULL;
	while (big[big_len])
        big_len++;

		
	while (big[i] && i < big_len)
	{	j = 0;
		while (big[i + j] == little[j] && (i + j) < big_len && little[j])
            j++;
	
		if (little[j] == '\0')
		{
            return (char *)&big[i];
		}
		i++;
	}
	return (NULL);
}
*/
	char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i = 0;
    size_t j;

    if (*little == '\0')
        return (char *)big;

    while (big[i] && i < len) {
        j = 0;
        while (big[i + j] == little[j] && (i + j) < len && little[j]) {
            j++;
        }
        if (little[j] == '\0') {
            return (char *)&big[i];
        }
        i++;
    }

    return NULL;
}

int main() {
    const char *big = "This is a test string sadsada sadsadsad ";
    const char *little = "test";
    size_t len = 20;

    char *result = ft_strnstr(big, little, len);
    if (result != NULL) {
        printf("Sous-chaîne trouvée : %s\n", result);
    } else {
        printf("Sous-chaîne non trouvée.\n");
    }

    return 0;
}