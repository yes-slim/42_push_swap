/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:37:06 by yes-slim          #+#    #+#             */
/*   Updated: 2023/03/02 18:54:48 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_arg(char *av)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (av[i])
	{
		if (av[i++] != ' ')
			a++;
	}
	if (a == 0)
		ft_error();
}

t_list	*ft_fill(char **av, int ac)
{
	int			i;
	static char	*arg;
	char		**args;
	t_list		*head;

	i = 1;
	while (ac > i)
	{
		check_arg(av[i]);
		arg = ft_join(arg, av[i++]);
		arg = ft_join(arg, " ");
	}
	args = ft_split(arg, ' ');
	i = 0;
	while (args[i])
		check_args(args[i++]);
	i = 0;
	head = ft_lstnew(ft_atoi(args[i++]));
	if (!head)
		exit(1);
	while (args[i])
		ft_lstadd_back(&head, ft_lstnew(ft_atoi(args[i++])));
	ft_free(args, i);
	check_double(head);
	return (head);
}
