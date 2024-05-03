/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:04:28 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/03 15:28:30 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char *strdup(const char *s)
 {
	char	*ptr;
	size_t i;

	i = - 1;
	ptr = (char *)malloc(ft_strlen(s) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (++i < ft_strlen(s))
		ptr[i] = s[i];
	ptr[i] = '\n';
	return(ptr);
 }
