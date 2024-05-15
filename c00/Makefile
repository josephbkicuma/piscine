# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jquicuma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 11:53:21 by jquicuma          #+#    #+#              #
#    Updated: 2024/05/14 13:09:40 by jquicuma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
F_SRC = ./src/
F_INCLUDES = ./includes/
SRC = ft_putchar \
	ft_print_alphabet \
	ft_print_reverse_alphabet \
	ft_print_numbers \
	ft_is_negative \
	ft_print_comb \
	ft_print_comb2 \
	ft_putnbr
CODE = $(addprefix $(F_SRC), $(SRC))
SRCS = $(addsuffix .c, $(CODE))
OBJS = $(addsuffix .o, $(CODE))
OUT = program
RM = rm -f
AR = ar rcs
NAME = c00.a
MAIN = main.c

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(CC) $(CFLAGS) -o $(OUT) $(MAIN) -L. $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all