/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:30:43 by axelpeti          #+#    #+#             */
/*   Updated: 2024/11/08 16:07:20 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*NewElem;

	NewElem = (t_list *) malloc(sizeof(t_list));
	if (!NewElem)
		return (NULL);
	NewElem->content = content;
	NewElem->next = NULL;
	return (NewElem);
}
