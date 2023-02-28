# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/17 14:40:46 by evocatur          #+#    #+#              #
#    Updated: 2023/02/28 10:41:06 by evocatur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variable

NAME = libftprintf.a

SRCS = ft_printf.c ft_printf_utilis.c ft_printf_flag.c ft_printf_unsigned.c ft_itoa.c ft_printf_p.c

LIBFT = libft/

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror


.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
