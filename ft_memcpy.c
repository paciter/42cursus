/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:38:41 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/14 12:43:18 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destcopy;
	char	*srcopy;

	i = 0;
	if (dest == (NULL))
		return (NULL);
	destcopy = (char *)dest;
	srcopy = (char *)src;
	while (i < n)
	{
		destcopy[i] = srcopy[i];
		i++;
	}
	return (dest);
}
