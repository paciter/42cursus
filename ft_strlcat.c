/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:34:04 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/14 12:41:58 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	while (src[i] && (dlen + i + 1) < size)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	if (i < size)
		dest[dlen + i] = '\0';
	if (size <= dlen)
		return (slen + size);
	else
		return (slen + dlen);
}
