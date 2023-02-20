/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:16:13 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/20 21:00:49 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*arr;
	int		size;

	if (ac <= 1)
		exit(0);
	stack_a = ft_fill(av, ac);
	if (!stack_a)
		ft_error();
	check_sort(stack_a);
	arr = sort_arr(&stack_a);
	if (!arr)
		ft_clear_stack(&stack_a);
	give_index(stack_a, arr);
	size = ft_lstsize(stack_a);
	sorting(ft_lstsize(stack_a), &stack_a, &stack_b, arr);
}

void	sorting(int size, t_list **stack_a, t_list **stack_b, int *arr)
{
	if (size == 2)
		sa(*stack_a);
	if (size == 3)
		sort_three(stack_a);
	if (size == 4)
		sort_four(stack_a, stack_b, arr);
	if (size >= 5 && size <= 25)
		sort_five_above(stack_a, stack_b, arr);
	if (size > 25)
	{
		to_stack_b(stack_a, stack_b);
		to_stack_a(stack_a, stack_b);
	}
}
