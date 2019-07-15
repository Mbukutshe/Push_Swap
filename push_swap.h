/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 14:23:54 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/07/15 16:37:28 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./get_next_line/get_next_line.h"

typedef struct	node
{
	int			v;
	int			p;
	struct node	*next;
}				stack_a, stack_b;

void		ft_print(struct node **head, int size);
int			ft_list_size(struct node *head);
void		ft_swap_a(stack_a **a);
void		ft_swap_b(stack_b **b);
void		ft_push_a(stack_a **a, stack_b **b, int *s);
void		ft_push_b(stack_a **a, stack_b **b, int *s);
void		ft_shift_a(stack_a **a, int s);
void		ft_shift_b(stack_b **b, int s);
void		ft_reverse_a(stack_a **a, int s);
void		ft_reverse_b(stack_b **b, int s);
void		ft_shift_both(stack_a **a, stack_b **b, int s);
void		ft_reverse_both(stack_a **a, stack_b **b, int s);
void		ft_push_both(stack_a **a, stack_b **b, int *s);
void		ft_swap_both(stack_a *a, stack_b *b);
int			ft_exist(char *str);
void		ft_populate(stack_a *head, char **stack, int *size);
int			ft_parse_int(char *value);
int			ft_range(char *value);
int			ft_dup(stack_a *head);
int			ft_check(char **stack);
int			ft_handle(stack_a *head, char **stack, int *size);
int			ft_handle_instr(char *instr);
void		ft_follow(stack_a **a, stack_b **b, char *instr, int *s);
void		ft_remove_first(struct node **head);
char		*ft_instr(char *str);
void		ft_remove_last(struct node **head, int s);
void		ft_add_first(struct node **head, int value);
int			stack_b_size(char *oper);
void		stack_a_size(int *size, char *oper);

#endif
