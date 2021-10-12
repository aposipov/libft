# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 11:45:35 by lchristi          #+#    #+#              #
#    Updated: 2021/10/12 15:48:29 by lchristi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c\
	   ft_isascii.c ft_isprint.c\
	   ft_strlen.c ft_memset.c ft_bzero.c\
	   ft_memcpy.c ft_memmove.c\
	   ft_toupper.c ft_tolower.c\
	   ft_strchr.c ft_strrchr.c ft_strncmp.c\
	   ft_memchr.c ft_memcmp.c\
	   ft_strnstr.c ft_atoi.c\
	   ft_calloc.c ft_strdup.c\
	   
OBJ = ${patsubst %.c,%.o,$(SRCS)}
D_FILES = ${patsubst %.c,%.d,$(SRCS)}
OPTFLAGS = -O2
RM = @rm -f

gcc:	
	${CC} ${FLAGS} ${SRCS}	

all:	${NAME}

${NAME}:	${OBJ}
			ar rcs ${NAME} $?

%.o : %.c
			${CC} ${FLAGS} ${OPTFLAGS} -c $< -o $@ -MD

include $(wildcard $(D_FILES))

clean:	
	${RM} ${OBJ} ${D_FILES}	

fclean:	clean
	${RM} ${NAME}

re: fclean all 

.PHONY: all clean fclean re