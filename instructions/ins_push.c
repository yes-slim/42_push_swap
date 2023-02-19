/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:34:19 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/19 18:23:59 by yes-slim         ###   ########.fr       */
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
	int	i;

	i = ft_lstsize(*head_b);
	if (i == 0)
		return ;
	if (!head_b || !(*head_b))
		ft_clear_stack(head_b);	
	push(head_a, head_b);
	ft_printf("pa\n");
}

void	pb(t_list **head_b, t_list **head_a)
{
	int	i;

	i = ft_lstsize(*head_a);
	if (i == 0)
		return ;
	if (!head_a || !(*head_a))
		ft_clear_stack(head_a);
	push(head_b, head_a);
	ft_printf("pb\n");
}
