/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 14:23:54 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/04 10:45:56 by kmbukuts         ###   ########.fr       */
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

#endif
