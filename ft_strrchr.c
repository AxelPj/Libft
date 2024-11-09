/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:16:28 by axelpeti          #+#    #+#             */
/*   Updated: 2024/11/07 19:17:43 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
	}
	return (NULL);
}
