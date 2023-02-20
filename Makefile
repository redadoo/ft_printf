# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/17 14:40:46 by evocatur          #+#    #+#              #
#    Updated: 2023/02/20 12:16:59 by evocatur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variable

NAME = libftprintf.a

SRCS = ft_printf.c ft_printf_utilis.c 

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

LIBFT		= libft


.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		@make -C $(LIBFT)
		@cp libft/libft.a .
		@mv libft.a $(NAME)
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
