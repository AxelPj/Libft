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

static int	count_occ(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	count;

	count = 0;
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] != set[j] && set[j])
		{
			j++;
		}
		if (s1[i] == set[j])
			count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*s;

	i = 0;
	k = 0;
	s = (char *)malloc((ft_strlen(s1) - count_occ(s1, set) + 1) * sizeof(char));
	while (s1[i])
	{
		j = 0;
		while (s1[i] != set[j] && set[j])
			j++;
		if (set[j] == '\0')
		{
			s[k] = s1[i];
			k++;
		}
		i++;
	}
	s[i] = '\0';
	return (s);
}

/* int main (void)
{
	char *s1 = "bonjour";
	char *set = "bo";
	
	printf("%s", ft_strtrim(s1, set));
} */