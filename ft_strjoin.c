/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:54:51 by axelpeti          #+#    #+#             */
/*   Updated: 2024/11/07 19:10:21 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	j = 0;
	i = 0;
	s = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (s1[i])
	{
		s[k] = s1[i];
		i++;
		k++;
	}
	while (s2[j])
	{
		s[k] = s2[j];
		j++;
		k++;
	}
	s[k] = '\0';
	return (s);
}
