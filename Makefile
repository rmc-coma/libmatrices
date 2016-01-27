#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/27 13:18:15 by rmc-coma          #+#    #+#              #
#    Updated: 2016/01/27 19:51:55 by rmc-coma         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libmatrices

CC = gcc
CFLAGS = -Wall -Werror -Wextra

HDR = ./libmatrices.h

SRC = 	./mth_mat4ini.c \
		./mth_mat4idt.c \
		./mth_mat4add.c \
		./mth_mat4sub.c \
		./mth_mat4mul.c \
		./mth_matsini.c \
		./mth_matsidt.c \
		./mth_matsadd.c \
		./mth_matssub.c \
		./mth_matsmul.c \
		./mth_matxini.c \
		./mth_matxadd.c \
		./mth_matxsub.c \
		./mth_matxmul.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I $(HDR) -c $(SRC)
	ar rc $(NAME).a $(OBJ)
	ranlib $(NAME).a

clean:
	-rm -f $(OBJ)
	-rm main.o
	-rm mth_mat4put.o
	-rm mth_matsput.o
	-rm mth_matxput.o
	-rm *~

fclean: clean
	-rm $(NAME)
	-rm $(NAME).a

re: fclean all

debug: $(NAME)
	$(CC) $(CFLAGS) -I $(HDR) -c $(SRC) mth_mat4put.c mth_matsput.c mth_matxput.c main.c
	$(CC) $(CFLAGS) -o $(NAME) $(NAME).a $(OBJ) mth_mat4put.o mth_matsput.o mth_matxput.o main.o