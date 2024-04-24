# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 13:13:46 by lraggio           #+#    #+#              #
#    Updated: 2024/04/22 18:45:25 by lraggio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS =	push_swap.c\
	initializations.c\
	validations.c\
	unitary_operations.c\
	composed_operations.c\
	complex.c\
	simple.c\
	functions.c\
	movements.c

OBJS = ${SRCS:.c=.o}

LIBFT = libft/libft.a

NUMBERS = 9 5 3 6 -7

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)
	@echo "Push_swap is ready to be used!"

$(LIBFT):
	make -s -C libft
	@echo "libft ready to be used"

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
clean:
	make clean -C libft
	rm -rf $(OBJS)
	@echo "Objects deleted"

fclean: clean
	make fclean -C libft
	rm -rf $(NAME)
	@echo "All cleaned"

re:	fclean all

val: re
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME) $(NUMBERS)

COLOUR_BLUE=\033[0;34m

norm:
	@echo "$(COLOUR_BLUE)Passando a Norminette com a flag -R CheckForbiddenSourceHeader: $(COLOUR_END)"
	@-norminette -R CheckForbiddenSourceHeader
