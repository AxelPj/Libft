/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:52:28 by axelpeti          #+#    #+#             */
/*   Updated: 2024/11/06 10:33:41 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	i = start;
	s2 = malloc((len - start + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	while (start <= len)
	{
		s2[i] = s[start];
		start++;
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
