/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 14:23:54 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/05 21:02:14 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "./get_next_line/get_next_line.h"
# include "./get_next_line/libft/libft.h"

typedef struct node
{
	int			v;
	struct node	*next
	
}stack_a;

typedef struct node
{
	int			v;
	struct node	*next;
}stack_b;

int			ft_list_size(node *head);
void		ft_swap_a(stack_a *a);
void		ft_swap_b(stack_b *b);
void		ft_push_a(stack_a *a, stack_b *b);
void		ft_push_b(stack_a *a, stack_b *b);
void		ft_shift_a(stack_a *a);
void		ft_shift_b(stack_b *b);
void		ft_reverse_a(stack_a *a);
void		ft_reverse_b(stack_b *b);
void		ft_shift_both(stack_a *a, stack_b *b);
void		ft_reverse_both(stack_a *a, stack_b *b);
void		ft_push_both(stack_a *a, stack_b *b);
void		ft_swap_both(stack *a, stack_b *b);
int			ft_range(int c, char *argv);
int			ft_exist(char *str);
void		ft_populate(stack_a *head, int value);
int			ft_parse_int(char *value);
int			ft_range(char *value);
int			ft_dup(stack_a *head);

#endif
