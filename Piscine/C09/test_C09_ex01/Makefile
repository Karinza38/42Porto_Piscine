# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/30 17:45:47 by afelix-d          #+#    #+#              #
#    Updated: 2024/01/02 19:31:50 by afelix-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c \
       srcs/ft_swap.c \
       srcs/ft_putstr.c \
       srcs/ft_strlen.c \
       srcs/ft_strcmp.c \

OBJS = $(SRCS:.c=.o)
	
HEAD = includes

CFLG = -Wall -Wextra -Werror

LIBR = libft.a

LIBM = ar rcs

CLRL = rm -f

CC = cc

.c.o:
	$(CC) -c $(CFLG) -o $@ $< -I $(HEAD)

all: $(LIBR)

$(LIBR): $(OBJS)
	$(LIBM) $(LIBR) $(OBJS)

clean:
	$(CLRL) $(OBJS)

fclean: clean
	$(CLRL) $(LIBR)

re: fclean all
