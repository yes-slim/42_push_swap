/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:55:45 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/20 19:34:16 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*buff;

	if (ac <= 1)
		exit(0);
	stack_a = ft_fill(av, ac);
	if (!stack_a)
		ft_error();
	while (1)
	{
		buff = get_next_line(0);
		if (!buff)
			break ;
		if (!check_ins(buff))
			ft_error();
		ft_execute(buff, &stack_a, &stack_b);
	}
	free (buff);
	if (!stack_b && check_if_sorted(stack_a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}
