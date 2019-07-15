/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_follow_instr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 11:21:58 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/15 16:13:24 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_follow(stack_a **a, stack_b **b, char *instr, int *s, int i)
{
	if (i == 1)
		instr = ft_instr(instr);
	if (ft_strequ(instr, "sa"))
		ft_swap_a(&*a);
	else if (ft_strequ(instr, "sb"))
		ft_swap_b(&*b);
	else if (ft_strequ(instr, "ss"))
		ft_swap_both(*a, *b);
	else if (ft_strequ(instr, "pa"))
		ft_push_a(&*a, &*b, s);
	else if (ft_strequ(instr, "pb"))
		ft_push_b(&*a, &*b, s);
	else if (ft_strequ(instr, "ra"))
		ft_shift_a(a, *s);
	else if (ft_strequ(instr, "rb"))
		ft_shift_b(b, stack_b_size(""));
	else if (ft_strequ(instr, "rr"))
		ft_shift_both(a, b, *s);
	else if (ft_strequ(instr, "rra"))
		ft_reverse_a(a, *s);
	else if (ft_strequ(instr, "rrb"))
		ft_reverse_b(b, stack_b_size(""));
	else if (ft_strequ(instr, "rrr"))
		ft_reverse_both(a, b, *s);
	return ;
}

void		ft_print(struct node **head, int size)
{
	struct node *current;
	
	current = *head;
	if (size > 0)
	{
		while (size-- > 0)
		{
			ft_putstr(ft_itoa(current->v));
			ft_putchar('\t');
			current = current->next;
		}
	}
}
