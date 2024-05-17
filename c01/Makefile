# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jquicuma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/17 07:53:50 by jquicuma          #+#    #+#              #
#    Updated: 2024/05/17 07:53:52 by jquicuma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = ./src/
FILES = ft_div_mod \
		ft_ft \
		ft_putstr \
		ft_rev_int_tab \
		ft_sort_int_tab \
		ft_strlen \
		ft_swap \
		ft_ultimate_div_mod \
		ft_ultimate_ft 
SRCS = $(addsuffix .c, $(addprefix $(SRC), $(FILES)))
OBJS = $(addsuffix .o, $(addprefix $(SRC), $(FILES)))
AR = ar rcs
NAME = c01.a
OUT = program

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)main.c -L. $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

