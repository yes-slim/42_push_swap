/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:55:45 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/19 21:05:53 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*buff;

	buff = malloc(69);
	if (ac <= 1)
		exit(0);
	stack_a = ft_fill(av, ac);
	if (!stack_a)
		ft_error();
	while (stack_b && !check_if_sorted(stack_a))
	{
		read(0, buff, 69);
		if (!check_ins(buff))
			ft_error();
		ft_execute(buff, &stack_a, &stack_b);
	}
	ft_printf("Ok");
}