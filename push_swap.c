/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:16:13 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/15 19:00:38 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	to_stack_b(t_list **stack_a, t_list **stack_b, int *arr);
int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*arr;

	if (ac > 1)
	{
		stack_a = ft_fill(av, ac);
		if (!stack_a)
			ft_error();
		check_double(stack_a);
		arr = sort_arr(&stack_a);
		to_stack_b(&stack_a, &stack_b, arr);
	}
	return (0);
}

void	to_stack_b(t_list **stack_a, t_list **stack_b, int *arr)
{
	int i  = 0;

	while ((*stack_a)->next)
	{
		if ((*stack_a)->content < arr[i])
		{
			pb(stack_b, stack_a);
			i++;
			rb(stack_b);
		}
		else if ((*stack_a)->content >= arr[i+15] && (*stack_a)->content <= arr[i])
		{
			pb(stack_b, stack_a);
			i++;
		}
		else if ((*stack_a)->content > arr[i+15])
			rra(stack_a);
		(*stack_a) =  (*stack_a)->next;
	}
	while ((*stack_b))
	{
		ft_printf("%d ", (*stack_b)->content);
		(*stack_b) = (*stack_b)->next; 
	}
}