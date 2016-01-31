#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/27 13:18:15 by rmc-coma          #+#    #+#              #
#    Updated: 2016/01/31 07:34:07 by rmc-coma         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libmatrices

CC = gcc
CFLAGS = -Wall -Werror -Wextra

HDR = ./libmatrices.h

SRC = 	./m_mat4ini.c \
		./m_mat4idt.c \
		./m_mat4val.c \
		./m_mat4add.c \
		./m_mat4sub.c \
		./m_mat4mul.c \
		./m_vec4ini.c \
		./m_vec4val.c \
		./m_mat4vec4mul.c \
		./m_mat4trs.c \
		./m_mat4scl.c \
		./m_mat4rot.c \
		./m_mat4cpy.c \
		./m_vec4cpy.c \
		./m_mat4pro.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I $(HDR) -c $(SRC)
	ar rc $(NAME).a $(OBJ)
	ranlib $(NAME).a

clean:
	-@rm -rf $(OBJ)
	-@rm -rf main.o
	-@rm -rf m_mat4put.o
	-@rm -rf m_vec4put.o
	-@rm -rf *~

fclean: clean
	-@rm -rf $(NAME)
	-@rm -rf $(NAME).a

re: fclean all

debug: $(NAME)
	$(CC) $(CFLAGS) -I $(HDR) -c $(SRC) m_mat4put.c m_vec4put.c main.c
	$(CC) $(CFLAGS) -o $(NAME) $(NAME).a $(OBJ) m_mat4put.o m_vec4put.o main.o