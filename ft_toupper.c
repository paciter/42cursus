/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:30:15 by rufaccia          #+#    #+#             */
/*   Updated: 2024/04/30 18:50:25 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
int ft_toupper (int c)
{
    if(c >= 'a' && c <= 'z')
		return (c = c - 32);
	else 
		return (0);
}
/*
int main() {
    char lowercase = 'a';
    char uppercase = ft_toupper(lowercase);
    
    printf("Lowercase: %c\n", lowercase);
    printf("Uppercase: %c\n", uppercase);

    return 0;
}*/