#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/17 15:41:44 by rmc-coma          #+#    #+#              #
#    Updated: 2017/12/17 15:50:07 by rmc-coma         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

.PHONY: all clean fclean re debug set_debug_mode

UNAME_S = $(shell uname -s)

NAME =			libmatrices
BUILDPATH =		build/
BUILD =			$(BUILDPATH)$(NAME)

HDRPATH =		includes/
SRCPATH =		src/
OBJPATH =		obj/
HDRDIRS :=		$(HDRPATH)

SRCS_FILES =	\
				m_mat4add.c m_mat4pro.c m_mat4val.c m_vec2set.c m_vec3dot.c	\
				m_mat4idt.c m_mat4rot.c m_vec2cpy.c m_vec3add.c m_vec3mag.c	\
				m_mat4ini.c m_mat4scl.c m_vec2ini.c m_vec3ang.c m_vec3new.c	\
				m_mat4lat.c m_mat4set.c m_vec2mag.c m_vec3cos.c m_vec3nrm.c	\
				m_mat4mul.c m_mat4sub.c m_vec2new.c m_vec3cpy.c m_vec4ini.c	\
				m_mat4new.c m_mat4trs.c m_vec2nrm.c m_vec3crs.c m_vec3set.c	\
				m_vec3sub.c m_vec3to2.c m_vec4set.c m_vec4new.c m_vec4sub.c	\
				m_vec4cpy.c m_vec4val.c m_vec4add.c m_vec4to3.c m_vec3val.c	\
				m_mat4cpy.c m_mat4vec4mul.c m_vec2val.c m_vec3ini.c


HDRS_FILES =	\
				libmatrices.h

HDRS =			$(HDRS_FILES:%=$(HDRPATH)%)
SRCS =			$(SRCS_FILES:%=$(SRCPATH)%)
OBJS =			$(SRCS_FILES:%.c=$(OBJPATH)%.o)

FLAGS =			-Wall -Wextra -Werror -g -fsanitize=address

all: $(NAME)

debug: set_debug_mode all

set_debug_mode:
	$(eval FLAGS := $(FLAGS) -g -fsanitize=address)

$(OBJPATH)%.o: $(SRCPATH)%.c
	@echo "$(NAME): compiling $<"
	@mkdir -p $(@D)
	@gcc $(FLAGS) -o $@ -c $< -I $(HDRPATH)

$(NAME): $(OBJS)
	@ar rc $(NAME).a $(OBJS)
	@ranlib $(NAME).a
	@echo "$(NAME).a: done"

clean:
	@echo "$(NAME).a: cleaning..."
	@/bin/rm -f $(OBJS)
	@/bin/rm -rf $(OBJPATH)
	@echo "$(NAME).a: done"

fclean: clean
	@/bin/rm -f $(NAME).a

re: fclean all