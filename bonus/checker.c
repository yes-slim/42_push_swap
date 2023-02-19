/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:55:45 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/19 22:45:14 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*buff;

	if (ac <= 1)
		exit(0);
	stack_a = ft_fill(av, ac);
	if (!stack_a)
		ft_error();
	buff = get_next_line(0);
	while (!check_if_sorted(stack_a))
	{
		if (!check_ins(buff))
			ft_error();
		ft_execute(buff, &stack_a, &stack_b);
	}
	free (buff);
	ft_printf("Ok\n");
}