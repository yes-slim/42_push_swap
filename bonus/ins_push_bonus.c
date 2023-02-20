/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_push_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:34:19 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/20 16:03:14 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_b(t_list **head_1, t_list **head_2)
{
	t_list	*node;

	node = *head_2;
	*head_2 = (*head_2)->next;
	node->next = *head_1;
	*head_1 = node;
}

void	pa_bonus(t_list **head_a, t_list **head_b)
{
	if (!head_b || !(*head_b))
		return ;
	push_b(head_a, head_b);
}

void	pb_bonus(t_list **head_b, t_list **head_a)
{
	if (!head_a || !(*head_a))
		return ;
	push_b(head_b, head_a);
}
