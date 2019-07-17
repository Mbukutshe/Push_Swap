# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/02 14:38:46 by kmbukuts          #+#    #+#              #
#    Updated: 2019/07/17 09:21:45 by kmbukuts         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECKER = checker

PUSH_SWAP = push_swap

SRC = checker.c ft_swap.c ft_push.c ft_rotate.c \
	  ft_reverse.c ft_list.c ft_errors.c ft_handle_errors.c \
	  get_next_line/get_next_line.c ft_follow_instr.c ft_sorted.c

PUSH = ft_push_swap.c

SWAP_OBJ = $(PUSH:.c=.o)

OBJ = $(SRC:.c=.o)

SRC_OBJ = ft_swap.c ft_push.c ft_rotate.c ft_reverse.c \
		  ft_list.c ft_errors.c ft_handle_errors.c \
		  ft_follow_instr.c

OBJ_SRC = $(SRC_OBJ:.c=.o)

FLAGS = -Wall -Werror -Wextra

$(CHECKER) : 
		gcc $(FLAGS) -c $(SRC)
		make -C get_next_line/ fclean && make -C get_next_line/
		make -C get_next_line/libft/ fclean && make -C get_next_line/libft/
		clang $(FLAGS) -I get_next_line/libft/ -c $(SRC)
	   	clang -o $(CHECKER) $(OBJ) -I get_next_line/libft/ -L get_next_line/libft/ -lft -L get_next_line/
	
$(PUSH_SWAP) : 
		gcc $(FLAGS) -c $(PUSH)
		clang -o $(PUSH_SWAP) $(OBJ_SRC) $(SWAP_OBJ) -I get_next_line/libft -L get_next_line/libft/ -lft -L get_next_line/

all : $(CHECKER) $(PUSH_SWAP)

clean :
		/bin/rm -f $(OBJ) $(SWAP_OBJ)

fclean : clean
		/bin/rm -f $(CHECKER) $(PUSH_SWAP)

re : fclean all

.PHONY : all clean fclean re
