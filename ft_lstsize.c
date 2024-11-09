/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:16:19 by axelpeti          #+#    #+#             */
/*   Updated: 2024/11/08 16:06:57 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;
	t_list	*current;

	current = lst;
	while (current->next != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}
