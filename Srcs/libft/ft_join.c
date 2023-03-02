/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:06:28 by yes-slim          #+#    #+#             */
/*   Updated: 2023/03/02 18:55:06 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *src)
{
	size_t	i;
	size_t	len;
	char	*dup;

	i = 0;
	len = ft_strlen(src);
	dup = malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_join(char *s1, char *s2)
{
	int		i;
	char	*new;
	int		j;

	if (!s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	i = 0;
	j = ft_strlen(s1);
	new = malloc(ft_strlen(s1) + ft_strlen(s2) * sizeof(char) + 1);
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
		new[j++] = s2[i++];
	new[j] = '\0';
	free (s1);
	return (new);
}
