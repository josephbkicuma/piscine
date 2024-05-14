# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jquicuma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 10:50:53 by jquicuma          #+#    #+#              #
#    Updated: 2024/05/14 11:14:44 by jquicuma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

CC = gcc

BIN = ./bin/

SRC = ./src/

INC = ./includes/

RM = rm -rf

CODE = ${SRC}main ft_putchar

SRCS = $(addsuffix .c, ${CODE})

OUT = program

all: ${SRCS}
	${RM} $(BIN)
	mkdir ${BIN}
	${CC} ${CFLAGS} ${SRCS} -o ${BIN}$(OUT)

clean: $(BIN)
	${RM} $(BIN)

fclean: $(BIN)$(OUT)
	rm -f $(BIN)$(OUT)

re: clean all
