/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_follow_instr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 11:21:58 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/14 16:21:39 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_follow_instr(stack_a **a, stack_b **b, char *instr, int s)
{
	if (ft_strequ(instr, "sa"))
		ft_swap_a(&*a);
	else if (ft_strequ(instr, "sb"))
		ft_swap_b(&*b);
	else if (ft_strequ(instr, "ss"))
		ft_swap_both(*a, *b);
	else if (ft_strequ(instr, "pa"))
		ft_push_a(&*a, &*b);
	else if (ft_strequ(instr, "pb"))
		ft_push_b(&*a, &*b);
	else if (ft_strequ(instr, "ra"))
		ft_shift_a(a, s);
	else if (ft_strequ(instr, "rb"))
		ft_shift_b(b);
	else if (ft_strequ(instr, "rr"))
		ft_shift_both(a, b);
	else if (ft_strequ(instr, "rra"))
		ft_reverse_a(a);
	else if (ft_strequ(instr, "rrb"))
		ft_reverse_b(b);
	else if (ft_strequ(instr, "rrr"))
		ft_reverse_both(a, b);
	return ;
}

void		ft_print(struct node **head, int size)
{
	struct node *current;
	
	current = *head;
	if (current != NULL)
	{
		ft_putendl("It's here!!");
		while (--size > 0)
		{
			ft_putendl(ft_itoa(current->v));
			current = current->next;
		}
	}
}
