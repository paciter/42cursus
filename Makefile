# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rufaccia <rufaccia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 12:09:53 by rufaccia          #+#    #+#              #
#    Updated: 2024/04/25 18:37:22 by rufaccia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  
NAME = libft.a
CC = cc

FLAGS = -Wall -Werror -Wextra 
OBJS = $(SRCS:.c.o)
.c.o:
	$(CC) $(FLAGS) -c -o $(<:.c=.o)
all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) ${OBJS}
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)
re: fclean $(NAME)

.PHONY: all, clean, fclean, re
