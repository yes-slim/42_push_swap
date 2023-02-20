/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_rotate_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:34:46 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/20 15:45:45 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_b(t_list **head)
{
	t_list	*tmp;
	t_list	*node;

	node = *head;
	*head = (*head)->next;
	tmp = ft_lstlast(node);
	node->next = NULL;
	tmp->next = node;
}

void	ra_bonus(t_list **head_a)
{
	if (!head_a || !(*head_a))
		return ;
	rotate_b(head_a);
}

void	rb_bonus(t_list **head_b)
{
	if (!(*head_b) || !head_b)
		return ;
	rotate_b(head_b);
}

void	rr_bonus(t_list **head_a, t_list **head_b)
{
	if (!(*head_a) || !(*head_b) || !head_a || !head_b)
		return ;
	ra(head_a);
	rb(head_b);
}
