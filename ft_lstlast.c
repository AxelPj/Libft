/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:48:10 by axelpeti          #+#    #+#             */
/*   Updated: 2024/11/15 12:13:34 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list *current;
	int size;
	int i;

	i = 0;
	size = ft_lstsize(lst);
	current = lst;
	while (i != size)
	{
		current = current->next;
		i++;
	}
	return (current);
}
