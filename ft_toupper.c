/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:30:15 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/03 16:02:18 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_toupper (int c)
{
    if(c >= 'a' && c <= 'z')
		return (c = c - 32);
	else 
		return (c);
}
/*
int main() {
    char lowercase = 'a';
    char uppercase = ft_toupper(lowercase);
    
    printf("Lowercase: %c\n", lowercase);
    printf("Uppercase: %c\n", uppercase);

    return 0;
}*/