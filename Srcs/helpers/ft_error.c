/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:32:52 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/18 16:57:57 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_error(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	check_if_sorted(t_list *stack_a)
{
	while (stack_a->next)
	{
		if (stack_a->content < stack_a->next->content)
			stack_a = stack_a->next;
		else
		{
			ft_printf("Stack is not sorted\n");
			exit(0);
		}
	}
	ft_printf("Stack is sorted\n");
}
