/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:17:43 by rufaccia          #+#    #+#             */
/*   Updated: 2024/05/10 14:34:20 by rufaccia         ###   ########.fr       */
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
void *ft_calloc( size_t count, size_t size );
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int 	ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void * ptn, int value, size_t count);
char	*ft_strchr(const char *s, int c);
char *ft_strdup(const char *s);
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
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list  *ft_lstlast(t_list *lst);
t_list    *ft_lstnew(void *content);
int	ft_lstsize(t_list *lst);
void ft_putchar_fd(char c, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
void    ft_striteri(char *s, void (f)(unsigned int, char *));
void ft_putendl_fd(char *s, int fd);
char *ft_strchr(const char *s, int c);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));


#endif
