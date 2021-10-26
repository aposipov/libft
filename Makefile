# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 11:45:35 by lchristi          #+#    #+#              #
#    Updated: 2021/10/26 20:07:36 by lchristi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER = libft.h

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c\
	   ft_isascii.c ft_isprint.c\
	   ft_strlen.c ft_memset.c ft_bzero.c\
	   ft_memcpy.c ft_memmove.c\
	   ft_toupper.c ft_tolower.c\
	   ft_strchr.c ft_strrchr.c ft_strncmp.c\
	   ft_memchr.c ft_memcmp.c\
	   ft_strnstr.c ft_atoi.c\
	   ft_calloc.c ft_strdup.c\
	   ft_substr.c ft_strjoin.c\
	   ft_strtrim.c ft_split.c ft_itoa.c\
	   ft_strmapi.c ft_striteri.c\
	   ft_putchar_fd.c ft_putstr_fd.c\
	   ft_putendl_fd.c ft_putnbr_fd.c\

SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c\
			 ft_lstsize_bonus.c ft_lstlast_bonus.c\
			 ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
			 ft_lstclear_bonus.c ft_lstiter_bonus.c\
			 ft_lstmap_bonus.c\

OBJ = ${patsubst %.c,%.o,$(SRCS)}
OBJ_BONUS = ${patsubst %.c,%.o,$(SRCS_BONUS)}
D_FILES = ${patsubst %.c,%.d,$(SRCS),$(SRCS_BONUS)} 
 
RM = @rm -f

all:		${NAME}

${NAME}:	${OBJ} ${HEADER}
			ar rcs ${NAME} $?

bonus:		${OBJ_BONUS} ${HEADER}
			ar rcs ${NAME} $?

%.o : %.c
			@${CC} ${FLAGS} -c $< -o $@ -MD

include ${wildcard ${D_FILES}}

clean:	
			${RM} ${OBJ} ${D_FILES} ${OBJ_BONUS}	

fclean:	clean
			${RM} ${NAME}

re: fclean all  

.PHONY: all clean fclean re bonus
