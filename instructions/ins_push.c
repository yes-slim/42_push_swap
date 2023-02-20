/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:34:19 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/20 16:11:33 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **head_1, t_list **head_2)
{
	t_list	*node;

	node = *head_2;
	*head_2 = (*head_2)->next;
	node->next = *head_1;
	*head_1 = node;
}

void	pa(t_list **head_a, t_list **head_b)
{
	if (!head_b || !(*head_b))
		clear_all(head_a, head_b);	
	push(head_a, head_b);
	ft_printf("pa\n");
}

void	pb(t_list **head_b, t_list **head_a)
{
	if (!head_a || !(*head_a))
		clear_all(head_a, head_b);
	push(head_b, head_a);
	ft_printf("pb\n");
}
