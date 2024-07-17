# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/06 19:43:19 by rgerdzhi          #+#    #+#              #
#    Updated: 2024/07/17 18:32:14 by rgerdzhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c \
ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c

OBJ = $(SRCS:.c=.o)

OBJ_B = $(SRCS_B:.c=.o)

# **************************************************************************** #
#                                 VARIABLES                                    #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

# **************************************************************************** #
#                                 RULES                                        #
# **************************************************************************** #

all: $(NAME)


$(NAME): $(OBJ)
	ar -q $(NAME) $(OBJ)

%.o: %.c Makefile libft.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ_B)
	ar -q $(NAME) $(OBJ_B)

clean:
	rm -f $(OBJ) $(OBJ_B)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	cc $(NAME)
	./a.out

.PHONY: all clean fclean re bonus
