/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:20:41 by rufaccia          #+#    #+#             */
/*   Updated: 2024/04/25 12:44:59 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"


void *ft_memset(void * ptn, int value, size_t count)
{
	size_t i;
	i = 0;
	while (i < count)
	{
		((char *) ptn)[i] = (char)value;
		i++;
	}
	return ptn;
}
/*
void *ft_memset(void *ptn, int value, size_t count)
{
	char *ptr = (char *)ptn;
	while (count--)
		 *ptr++ = (char)value;
	return ptn;
}
*/
int main(void)
{
	char str[50];
	strcpy(str, "This is string.h library function");
	puts(str);
	ft_memset(str, '$', 5);
	puts(str);
	return (0);
}
