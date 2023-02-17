/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:16:13 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/17 14:58:37 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int *arr;

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

