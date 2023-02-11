/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:16:13 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/11 16:05:18 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int main(int ac, char **av)
{
	t_list	*head_a;
	
	if (ac > 1)
	{
		head_a = ft_fill(av, ac);
		check_double(head_a);
	}
	return (0);
}