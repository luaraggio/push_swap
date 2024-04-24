# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 17:14:34 by lraggio           #+#    #+#              #
#    Updated: 2024/03/25 18:18:55 by lraggio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMPILER = gcc
CFLAGS = -Wall -Wextra -Werror -I.
SRCS =		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_atol.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_itoa_base.c\
		ft_print_char.c\
		ft_print_decimal.c\
		ft_printf.c\
		ft_print_hexa.c\
		ft_print_pointer.c\
		ft_print_string.c\
		ft_print_un.c\
		ft_utoa_base.c\
		get_next_line.c\
		get_next_line_utils.c

OBJS = $(SRCS:.c=.o)

RM = rm -rf

all:	$(NAME)
	
$(NAME):	$(OBJS) 
		ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) 

re:	fclean all

.PHONY: all clean fclean re 
