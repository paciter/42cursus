/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:12:17 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/14 12:43:22 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sdup;
	unsigned char	oc;

	sdup = (unsigned char *)s;
	oc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (sdup[i] == oc)
			return (&sdup[i]);
		i++;
	}
	return (0);
}
