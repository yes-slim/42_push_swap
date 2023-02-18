/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:34:04 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/18 17:00:25 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void	sort_hundred_above(t_list **stack_a, t_list **stack_b, int *arr)
// {

// }

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
