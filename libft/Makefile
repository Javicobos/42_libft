# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 15:18:39 by jcobos-d          #+#    #+#              #
#    Updated: 2021/11/18 18:47:01 by jcobos-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
			ft_strnstr.c ft_atoi.c ft_calloc.c ft_itoa.c ft_putchar_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
			ft_strdup.c ft_striteri.c ft_strjoin.c ft_strmapi.c \
			ft_strtrim.c ft_substr.c

B_SRC	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
			ft_strnstr.c ft_atoi.c ft_calloc.c ft_itoa.c ft_putchar_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
			ft_strdup.c ft_striteri.c ft_strjoin.c ft_strmapi.c \
			ft_strtrim.c ft_substr.c \
			ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS	=	${SRCS:.c=.o}

B_OBJS	=	${B_SRC:.c=.o}

NAME	=	libft.a

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

# COLORS

BLACK				=	\033[0;30m
RED					=	\033[0;31m
GREEN				=	\033[0;32m
YELLOW				=	\033[0;33m
BLUE				=	\033[0;34m
MAGENTA				=	\033[0;35m
CYAN				=	\033[0;36m
RESET				=	\033[0m

.c.o:
			@echo "${BLUE}Building $@${RESET}"
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			@echo "${CYAN}Making $@${RESET}"
			ar rcs ${NAME} ${OBJS}
			@echo "${GREEN}✨ Complete! $@ created ✨${RESET}"


all:		${NAME}

clean:
			@rm -f ${OBJS} ${B_OBJS}
			@echo "${GREEN}Objects cleaned${RESET}"

fclean:		clean
			@rm -f ${NAME}
			@echo "${GREEN}Binary cleaned${RESET}"


re:			fclean all

bonus:		${B_OBJS}
			@make OBJS="${B_OBJS}" all

.PHONY:		all clean fclean re bonus