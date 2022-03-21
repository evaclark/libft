# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eclark <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 12:45:56 by eclark            #+#    #+#              #
#    Updated: 2022/03/21 15:36:16 by eclark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
			ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
			ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
			ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
			ft_substr.c ft_tolower.c ft_toupper.c ft_itoa.c ft_strmapi.c \
			ft_striteri.c ft_split.c \
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

flcean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
