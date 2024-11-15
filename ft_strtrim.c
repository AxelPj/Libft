/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:15:22 by axelpeti          #+#    #+#             */
/*   Updated: 2024/11/06 10:33:10 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;
	size_t	len_res;

	end = ft_strlen(s1) - 1;	
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	len_res = end - start + 1;
	if (len_res == 0)
		return (ft_strdup(""));
	result = (char *)malloc (len_res + 1);
	if (!result)
		return (NULL);
	ft_strlcpy (result, s1 + start, len_res + 1);
	result[len_res] = '\0';
	return (result);
}
