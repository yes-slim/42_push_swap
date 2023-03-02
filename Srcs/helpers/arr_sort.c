/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:58:57 by yes-slim          #+#    #+#             */
/*   Updated: 2023/03/02 18:54:38 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*arr_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

int	*sort_arr(t_list **stack_a)
{
	int		i;
	int		n;
	int		*arr;
	t_list	*head;

	head = *stack_a;
	n = ft_lstsize(head);
	arr = malloc(n * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (head)
	{
		arr[i] = head->content;
		head = head->next;
		i++;
	}
	arr = arr_sort(arr, n);
	return (arr);
}
