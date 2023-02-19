/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:32:52 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/19 20:50:23 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_clear_stack(t_list **stack)
{
	t_list	*tmp;

	if (!stack || !(*stack))
		return ;
	while (stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
	ft_error();
}
void	clear_all(t_list **stack1, t_list **stack2)
{
	ft_clear_stack(stack1);
	ft_clear_stack(stack2);
}

void	ft_error(void)
{
	ft_printf("Error\n");
	exit(1);
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
