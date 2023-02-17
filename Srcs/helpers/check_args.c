/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:16:30 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/16 12:54:43 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	check_args(char *av)
{
	int			i;
	int			n;
	static int	c;

	i = 0;
	if (!av[i])
		ft_error();
	if (av[i] == '+' || av[i] == '-')
			av++;
	while (av[i])
	{
		if (ft_isdigit(av[i]) == 0)
			ft_error();
		i++;
	}
	n = ft_atoi(av);
	if (n == 0 && c == 1)
		ft_error();
	if (n == 0)
		c++;	
}

void	check_sort(t_list *head)
{
	t_list	*tmp;
	int		i;

	tmp = head;
	i = 0;
	while (tmp->next)
	{
		if (tmp->content > (tmp->next)->content)
			i++;
		tmp = tmp->next;
	}
	if (i == 0)
		exit(0);
}

void	check_double(t_list *head)
{
	t_list	*tmp;
	t_list	*tmp_2;
	
	tmp = head;
	while (tmp)
	{
		tmp_2 = tmp->next;
		while (tmp_2)
		{
			if (tmp->content == tmp_2->content)
				ft_error();
			tmp_2 = tmp_2->next;
		}
		tmp = tmp->next;
	}
	check_sort(head);
}
