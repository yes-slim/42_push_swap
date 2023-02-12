/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:27:12 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/12 14:06:44 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list *head)
{
	int		i;
	t_list	*node;
	int		tmp;

	i = ft_lstsize(head);
	if (i <= 1)
		return ;
	tmp = head->content;
	node = head->next;
	head->content = node->content;
	node->content = tmp;	
}

void	sa(t_list *head_a)
{
	if (!head_a)
		ft_error();
	swap(head_a);
	ft_printf("sa\n");
}

void	sb(t_list *head_b)
{
	if (!head_b)
		ft_error();
	swap(head_b);
	ft_printf("sb\n");
}

void	ss(t_list *head_a, t_list *head_b)
{
	if (!head_a || !head_b)
		ft_error();
	sa(head_a);
	sb(head_b);
	ft_printf("ss\n");
}
