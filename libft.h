/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:17:43 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/03 19:03:44 by rufaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;


int	ft_atoi(const char *str);
void ft_bzero(void *b, size_t len);
void * calloc( size_t elementCount, size_t elementSize );
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int 	ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void * ptn, int value, size_t count);
char	*strchr(const char *s, int c);
char *strdup(const char *s);
char *ft_strjoin(char const *p1, char const *p2);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlen(const char *str);
size_t ft_strlcat(char *dest, const char *src, size_t size);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strrchr(const char *s, int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strtrim(const char *s1, const char *set);
int ft_tolower (int c);
int ft_toupper (int c);

#endif
