/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:28:57 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/19 21:06:12 by yes-slim         ###   ########.fr       */
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
	while (str1[i] || str2[1])
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (1);
}


int	check_ins(char *str)
{
	if (!str_cmp(str, "ra") && !str_cmp(str, "rb") && !str_cmp(str, "rr")
		&& !str_cmp(str, "rra") && !str_cmp(str, "rrb") && !str_cmp(str, "rrr")
		&& !str_cmp(str, "sa") && !str_cmp(str, "sb") && !str_cmp(str, "ss")
		&& !str_cmp(str, "pa") && !str_cmp(str, "pb"))
		return (0);
	else
		return (1);
}

void	ft_execute(char *str, t_list **stack_a, t_list **stack_b)
{
	if (!stack_a || !(*stack_a) || !stack_b || !(*stack_b))
		clear_all(stack_a, stack_b);
	if (str_cmp(str, "ra"))
		ra(stack_a);
	if (str_cmp(str, "rb"))
		rb(stack_b);
	if (str_cmp(str, "rr"))
		rr(stack_a, stack_b);
	if (str_cmp(str, "rra"))
		rra(stack_a);
	if (str_cmp(str, "rrb"))
		rrb(stack_a);
	if (str_cmp(str, "rrr"))
		rrr(stack_a, stack_b);
	if (str_cmp(str, "sa"))
		sa(*stack_a);
	if (str_cmp(str, "sb"))
		sb(*stack_b);
	if (str_cmp(str, "ss"))
		ss(*stack_a, *stack_b);
	if (str_cmp(str, "pa"))
		pa(stack_a, stack_b);
	if (str_cmp(str, "pb"))
		pb(stack_b, stack_a);
}