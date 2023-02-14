/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:16:13 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/14 18:21:08 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	int		*arr_a;

	if (ac > 1)
	{
		stack_a = ft_fill(av, ac);
		if (!stack_a)
			ft_error();
		check_double(stack_a);
		arr_a = sort_arr(&stack_a);
	}
	return (0);
}
