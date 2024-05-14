/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:06:28 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/14 15:24:24 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *p1, char const *p2)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (!p1 && !p2)
		return (ft_strdup(""));
	if (!p1)
		return (ft_strdup(p2));
	if (!p2)
		return (ft_strdup(p1));
	j = 0;
	i = 0;
	ptr = (char *)ft_calloc((ft_strlen(p1) + ft_strlen(p2) + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	while (p1[i])
	{
		ptr[i] = p1[i];
		i++;
	}
	while (p2[j])
		ptr[i++] = p2[j++];
	return (ptr);
}
