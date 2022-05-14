# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/22 18:59:36 by obeedril          #+#    #+#              #
#    Updated: 2021/11/22 20:51:42 by obeedril         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libft.a

SRC =	ft_strlen.c \
	  	ft_strchr.c \
		ft_strjoin.c \
	  	ft_itoa.c \
		ft_strdup.c

OBJ = ${SRC:.c=.o}

HEADER = libft.h

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

.c.o:	libft.h
				${CC} ${FLAGS} -c $< -I ${HEADER} -o ${<:.c=.o}

${NAME} : ${OBJ}
	ar rcs ${NAME} ${OBJ}

all : ${NAME}

clean :
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
