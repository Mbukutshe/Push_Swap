/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbukuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 14:23:54 by kmbukuts          #+#    #+#             */
/*   Updated: 2019/09/16 15:08:25 by kmbukuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./get_next_line/get_next_line.h"

typedef struct		s_node
{
	int				v;
	struct s_node	*next;
}					t_stack;

void				ft_print(t_stack *head, int size);
int					ft_list_size(t_stack *head);
void				ft_swap_a(t_stack **a, int s);
void				ft_swap_b(t_stack **b);
void				ft_push_a(t_stack **a, t_stack **b, int *s);
void				ft_push_b(t_stack **a, t_stack **b, int *s);
void				ft_shift_a(t_stack **a, int s);
void				ft_shift_b(t_stack **b, int s);
void				ft_reverse_a(t_stack **a, int s);
void				ft_reverse_b(t_stack **b, int s);
void				ft_shift_both(t_stack **a, t_stack **b, int s);
void				ft_reverse_both(t_stack **a, t_stack **b, int s);
void				ft_push_both(t_stack *a, t_stack *b, int *s);
void				ft_swap_both(t_stack **a, t_stack **b, int s);
int					ft_exist(char *str);
void				ft_populate(t_stack *head, char **stack, int *size);
void				ft_assign(int v, t_stack *list);
int					ft_parse_int(char *value);
int					ft_range(char *value);
int					ft_dup(t_stack *head);
int					ft_check(char **stack);
int					ft_handle(t_stack *head, char **stack, int *size);
int					ft_handle_instr(char *instr);
void				ft_follow(t_stack **a, t_stack **b, char *instr, int *s);
void				ft_remove_first(t_stack **head);
char				*ft_instr(char *str);
void				ft_remove_last(t_stack *head, int s);
void				ft_add_first(t_stack **head, int value);
int					stack_b_size(char *oper);
void				stack_a_size(int *size, char *oper);
int					ft_sorted(t_stack **head, int s);
void				ft_generate_a(t_stack **a, t_stack **b, int *size);
void				ft_generate_b(t_stack **a, t_stack **b, int *size);
int					ft_is_less(t_stack *head, int s);
int					ft_first_state(t_stack *head, int size);
int					ft_is_bigger(t_stack *head, int s);
int					ft_sorted_desc(t_stack *head);
int					ft_is_les(t_stack *head);
int					ft_is_big(t_stack *head);
int					ft_how_big(t_stack *head);
int					ft_must_push(t_stack *head, int s);
int					ft_pa_sa(t_stack *a, t_stack *b);
int					ft_last_less(t_stack *head);
void				ft_add_last(t_stack **head, int value);
void				ft_execute_both(t_stack **a, t_stack **b, int *size);
int					ft_execute_ra(t_stack **a, int *size);
int					ft_execute_rb(t_stack **b, int size);
int					ft_execute_rra(t_stack **a, int *size);
int					ft_execute_rrb(t_stack **b, int size);
int					ft_execute_a(t_stack **a, int *size);
int					ft_execute_b(t_stack **b, int s);
void				ft_another_processes(t_stack **a, t_stack **b, int *size);
void				ft_get_process(t_stack **a, t_stack **b, int s, char *l);
void				ft_is_ok(t_stack **a, int size);
void				ft_instr_one(char *instr);
void				ft_instr_two(char *instr);
void				ft_rra(t_stack **a, int *size);
void				ft_ra(t_stack **a, int *size);
void				ft_pb(t_stack **a, t_stack **b, int *size);
void				ft_put_back(t_stack **a, t_stack **b, int *size);
void				ft_sa(t_stack **a, int *size);
void				ft_rb(t_stack **b);
void				ft_pa(t_stack **a, t_stack **b, int *size);
void				ft_pasa(t_stack **a, t_stack **b, int *size);
void				ft_rrb(t_stack **b);
void				ft_sb(t_stack **b);
void				ft_normal_sa(t_stack **a, int *size);
void				ft_get_biggest(t_stack **a);
int					ft_get_max(t_stack *a);
int					ft_get_min(t_stack *a);
int					*ft_create_range(int min, int max, int size);
int					ft_get_mid(int size);
void				ft_sort_100(t_stack **a, t_stack **b, int *size);
void				ft_put_top(t_stack **b, int front, int back);
int					*ft_range_500(int min, int max, int size);
void				ft_put_all_back(t_stack **a, t_stack **b, int *size);
void				ft_first_seg(t_stack *a, int **r, int *min, int *max);
void				ft_exec_ra_seg(t_stack **a, int s, int i);
void				ft_exec_rra_seg(t_stack **a, int s, int i);
int					ft_put_at_top(t_stack **a, int s, int i);
t_stack				*ft_put_to_b_seg(t_stack **a, t_stack **b, int *s);
int					ft_find_biggest(t_stack *ptr, int v);
char				*ft_set(char **av, int c);
char				**ft_core_process(int c, char **res, char **av);
void				ft_exec(t_stack **a, t_stack **b, char **instr, int s);
void				ft_free(t_stack **a, t_stack **b);
int					ft_is_right(char **av);
#endif
