/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:53:13 by axelpeti          #+#    #+#             */
/*   Updated: 2024/11/07 18:54:24 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	i;

	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	while (i <= nmemb * size)
	{
		((char *)tab)[i] = 0;
		i++;
	}
	return (tab);
}
