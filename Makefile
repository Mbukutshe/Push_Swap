# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/02 14:38:46 by kmbukuts          #+#    #+#              #
#    Updated: 2019/07/06 06:49:07 by kmbukuts         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

SRC = checker.c ft_swap.c ft_push.c ft_rotate.c \
	  ft_reverse.c ft_list.c ft_errors.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

$(NAME) : 
		gcc $(FLAGS) $(SRC)
		make -C get_next_line/libft/ fclean && make -C get_next_line/libft/
		clang $(FLAGS) -I get_next_line/libft/ -c $(SRC)
		clang -o $(NAME) $(OBJ) -I get_next_line/libft/ -L libft/ -lft

all : $(NAME)

clean :
		/bin/rm -f $(OBJ)

fclean : clean
		/bin/rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
