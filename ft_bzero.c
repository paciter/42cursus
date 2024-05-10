/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:51:10 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/10 12:16:16 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *b, size_t len)
{
	unsigned char *p;
	size_t	i;

	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		  p[i] = 0;
		i++;
	}
}
