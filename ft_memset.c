/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:20:41 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/14 12:42:36 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptn, int value, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		((char *)ptn)[i] = (char)value;
		i++;
	}
	return (ptn);
}
