#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/27 13:18:15 by rmc-coma          #+#    #+#              #
#    Updated: 2016/01/30 03:47:38 by rmc-coma         ###   ########.fr        #
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
		./m_matsini.c \
		./m_matsidt.c \
		./m_matsadd.c \
		./m_matssub.c \
		./m_matsmul.c \
		./m_matxini.c \
		./m_matxadd.c \
		./m_matxsub.c \
		./m_matxmul.c \
		./m_vec4ini.c \
		./m_vec4val.c \
		./m_mat4vec4mul.c \
		./m_mat4trs.c \
		./m_mat4scl.c \
		./m_mat4rot.c

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
	-@rm -rf m_matsput.o
	-@rm -rf m_matxput.o
	-@rm -rf m_vec4put.o
	-@rm -rf *~

fclean: clean
	-@rm -rf $(NAME)
	-@rm -rf $(NAME).a

re: fclean all

debug: $(NAME)
	$(CC) $(CFLAGS) -I $(HDR) -c $(SRC) m_mat4put.c m_matsput.c m_matxput.c m_vec4put.c main.c
	$(CC) $(CFLAGS) -o $(NAME) $(NAME).a $(OBJ) m_mat4put.o m_matsput.o m_matxput.o m_vec4put.o main.o