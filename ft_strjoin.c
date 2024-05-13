/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:06:28 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/13 18:51:18 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strjoin(char const *p1, char const *p2)
{         
    if (!p1  && !p2 )
        return(ft_strdup(""));
    if (!p1)
        return(ft_strdup(p2));
    if (!p2)
        return(ft_strdup(p1));
        
    size_t  i;
    size_t  j;
    size_t    lenglob;
    char  *ptr;

    j = 0;
    i = 0;
    lenglob = ft_strlen(p1) + ft_strlen(p2) + 1;
    
    ptr =(char *)malloc((lenglob) * sizeof (char));
    if( !ptr)
        return (NULL);
    while (p1[i])
         {
             ptr[i] = p1[i];
             i++;
          }
        while (p2[j])
        {
             ptr[i] = p2[j];
             i++;
             j++;
        }
        ptr [i] = '\0';
    return (ptr);
}

/*
int main(int argc ,char **argv) 
{
    if (argc != 3)
        return (1);
        
    const char *p1 = argv[1];
    const char *p2 = argv[2];
    
    printf("p1value %s | ", p1);
    printf("p2 value %s | ", p2);
    
    char *ptr = ft_strjoin(argv[1], argv[2]);

    
    printf("p1 value %s | ", p1);
    printf("p2 value  %s \n ",p2);
    if (ptr != NULL) 
    {
        printf("string est join %s\n | ",ptr);
        free(ptr);
    } else {
       printf("La string est NULL.\n");
    }

    return 0;
}*/