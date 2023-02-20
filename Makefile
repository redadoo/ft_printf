# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/17 14:40:46 by evocatur          #+#    #+#              #
#    Updated: 2023/02/20 10:45:20 by evocatur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variable

NAME = libftprintf.a

SRCS = ft_printf.c main.c 

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs  $(LIBFT) ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
