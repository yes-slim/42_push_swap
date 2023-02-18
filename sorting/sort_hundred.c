/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:34:04 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/18 23:57:52 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pos_b(t_list *stack_b, int pos, int *pos_M)
{
	while (stack_b)
	{
		if (pos == stack_b->index)
			break ;
		(*pos_M)++;
		stack_b = stack_b->next;
	}
}

void	to_up_b(t_list **stack_b, char *str, int tar)
{
	if (ft_strlen(str) == 2)
	{
		while ((*stack_b)->index != tar)
			rb(stack_b);
		return ;
	}
	if (ft_strlen(str) == 3)
	{
		while ((*stack_b)->index != tar)
			rrb(stack_b);
		return ;
	}
}

void	to_stack_b(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	n;

	n = 15;
	if (ft_lstsize(*stack_a) > 100)
		n *= 2;
	i = 0;
	while ((*stack_a))
	{
		if ((*stack_a)->index < i)
		{
			pb(stack_b, stack_a);
			rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index >= i && (*stack_a)->index <= i + n)
		{
			pb(stack_b, stack_a);
			i++;
		}
		else
			ra(stack_a);
	}
}

void	to_stack_a(t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		pos_M;

	while (*stack_b)
	{
		i = ft_lstsize(*stack_b);
		pos_b(*stack_b, i, &pos_M);
		if (pos_M >= ft_lstsize(*stack_b) / 2)
			to_up_b(stack_b, "rrb", i);
		else
			to_up_b(stack_b, "rb", i);
		pa(stack_a, stack_b);
		i--;
	}
}