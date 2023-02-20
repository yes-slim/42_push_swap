/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:28:57 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/20 16:08:45 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_if_sorted(t_list *stack_a)
{
	while (stack_a->next)
	{
		if (stack_a->content < stack_a->next->content)
			stack_a = stack_a->next;
		else
			return (0);
	}
	return (1);
}

int	str_cmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (1);
}

int	check_ins(char *str)
{
	if (!str_cmp(str, "ra\n") && !str_cmp(str, "rb\n") && !str_cmp(str, "rr\n")
		&& !str_cmp(str, "rra\n") && !str_cmp(str, "rrb\n")
		&& !str_cmp(str, "rrr\n") && !str_cmp(str, "sa\n")
		&& !str_cmp(str, "sb\n") && !str_cmp(str, "ss\n")
		&& !str_cmp(str, "pa\n") && !str_cmp(str, "pb\n"))
		return (0);
	else
		return (1);
}

void	ft_execute(char *str, t_list **stack_a, t_list **stack_b)
{
	if (str_cmp(str, "ra\n"))
		ra_bonus(stack_a);
	if (str_cmp(str, "rb\n"))
		rb_bonus(stack_b);
	if (str_cmp(str, "rr\n"))
		rr_bonus(stack_a, stack_b);
	if (str_cmp(str, "rra\n"))
		rra_bonus(stack_a);
	if (str_cmp(str, "rrb\n"))
		rrb_bonus(stack_a);
	if (str_cmp(str, "rrr\n"))
		rrr_bonus(stack_a, stack_b);
	if (str_cmp(str, "sa\n"))
		sa_bonus(*stack_a);
	if (str_cmp(str, "sb\n"))
		sb_bonus(*stack_b);
	if (str_cmp(str, "ss\n"))
		ss_bonus(*stack_a, *stack_b);
	if (str_cmp(str, "pa\n"))
		pa_bonus(stack_a, stack_b);
	if (str_cmp(str, "pb\n"))
		pb_bonus(stack_b, stack_a);
}
