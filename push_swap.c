/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:16:13 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/18 17:35:31 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int 	*arr;

	if (ac <= 1)
		exit(0);
	stack_a = ft_fill(av, ac);
	if (!stack_a)
		ft_error();
	arr = sort_arr(&stack_a);
	give_index(stack_a, arr);
	int size = ft_lstsize(stack_a);
	sorting(ft_lstsize(stack_a), &stack_a, &stack_b, arr);
	// while (stack_b)
	// {
	// 	ft_printf("%d ", stack_b->content);
	// 	stack_b = stack_b->next;
	// }
	// check_if_sorted(stack_b);
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
	}
}

void	give_index(t_list *head, int *arr)
{
	int		i;
	t_list	*tmp;
	
	tmp = head;
	while (head)
	{
		i = 0;
		while (i < ft_lstsize(tmp))
		{
			if (head->content == arr[i])
				head->index = i;
			i++;
		}
		head = head->next;
	}
}