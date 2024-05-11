/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:34:25 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/03 15:52:35 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  debut(const char *s1, const char *sep)
	{
	    size_t    i;	
	    i = 0;
	    
	    while (s1[i] == *sep)
	        i++;
	    return (i);
	}
	
	size_t fin(const char *s1, const char *sep)
	{
	    size_t    i;
	    
	    i = strlen(s1);
	
	     while (s1[i] == *sep)
	        i--;
	    return (i);
	}
	
	char *ft_strtrim(char const *s1, char const *set)
	{
	    size_t    i;
	    size_t    p;
	    size_t    o;
	    char    *ptr;
	    
	    o = 0;
	    p = fin(s1, set);
	    i = debut(s1, set);    
	    ptr = ft_substr(s1, i, p - i);
	    return (ptr);
	}
	/*
	int main()
	{
	  char  *chat = "111chat qui boit de l eau111";
	  char *s = "111";
	  
	  ft_strtrim(chat, s);
	  printf("%s\n", ft_strtrim(chat, s));
	}*/
