/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:51:10 by rufaccia          #+#    #+#             */
/*   Updated: 2024/04/25 16:00:14 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "test.h"


void ft_bzero(void *b, size_t len)
{
	unsigned char *p;
	size_t i;

	p = b;
	i = 0;
	while (i < len)
	{
		p[i] = 0;
		i++;
	}
}
/*
void ft_bzero (void *s, size_t n)
{
	unsigned char *ptr = s;
	while (n--)
		*ptr++ = '\0';
}
*/
int main(void)
{
	char str[50];
	strcpy(str, "This is string.h library function");
	puts(str);
	ft_bzero(str, 2);
	puts(str);
	return (0);
}
