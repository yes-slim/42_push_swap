/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_less_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:34:06 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/18 17:00:58 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pos(t_list *stack_a, int min, int *pos_m)
{
	t_list	*tmp;

	tmp = stack_a;
	while (stack_a)
	{
		if (min == stack_a->content)
			break ;
		(*pos_m)++;
		stack_a = stack_a->next;
	}
}

void	to_up(t_list **stack_a, char *str, int tar)
{
	if (ft_strlen(str) == 2)
	{
		while ((*stack_a)->content != tar)
			ra(stack_a);
		return ;
	}
	if (ft_strlen(str) == 3)
	{
		while ((*stack_a)->content != tar)
			rra(stack_a);
		return ;
	}
}

void	sort_three(t_list **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->content;
	b = (*stack_a)->next->content;
	c = (*stack_a)->next->next->content;
	if ((a > b) && (a > c) && (b < c))
		ra(stack_a);
	if ((a < b) && (a > c) && (b > c))
		rra(stack_a);
	if ((a < c) && (a < b) && (b > c))
	{
		rra(stack_a);
		sa(*stack_a);
	}
	if ((a > b) && (a > c) && (b > c))
	{
		ra(stack_a);
		sa(*stack_a);
	}	
	if ((a > b) && (a < c) && (b < c))
		sa(*stack_a);
}

void	sort_four(t_list **stack_a, t_list **stack_b, int *arr)
{
	int	pos_m;

	pos_m = 0;
	pos(*stack_a, arr[0], &pos_m);
	if (pos_m > ft_lstsize(*stack_a) / 2)
		to_up(stack_a, "rra", arr[0]);
	else
		to_up(stack_a, "ra", arr[0]);
	pb(stack_b, stack_a);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five_above(t_list **stack_a, t_list **stack_b, int *arr)
{
	int	pos_m;
	int	i;

	pos_m = 0;
	i = 0;
	while (ft_lstsize(*stack_a) > 3)
	{
		pos(*stack_a, arr[i], &pos_m);
		if (pos_m > ft_lstsize(*stack_a) / 2)
			to_up(stack_a, "rra", arr[i]);
		else
			to_up(stack_a, "ra", arr[i]);
		pb(stack_b, stack_a);
		i++;
	}
	sort_three(stack_a);
	while (i--)
		pa(stack_a, stack_b);
}
