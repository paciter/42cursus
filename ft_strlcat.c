/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:34:04 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/03 15:38:15 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t dlen;
	size_t slen;
		
	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
		
	if (dlen < size - 1 && size > 0)
	{
		while (src[i] && dlen + i < size - 1)
		{
			dest[dlen] = src[i];
			dlen++;
			i++;
		}
		dest[dlen] = '\0';
    		return (dlen + slen);
	}
	else
		return (dlen + slen);
	
}
