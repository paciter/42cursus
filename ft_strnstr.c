/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:48:38 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/13 19:21:27 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	p;

	j = 0;
	i = 0;
	p = len;
	
	if (*little == '\0')
		return((char *)big);

	if (*little > *big)
        return NULL;
		
	while (big[i] && i < len)
	{	
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len && little[j])
            j++;
	
		if (little[j] == '\0')
            return (char *)&big[i];
		i++;
	}
	return (NULL);
}