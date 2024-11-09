/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:47:24 by axelpeti          #+#    #+#             */
/*   Updated: 2024/11/07 18:55:29 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*str_rev(char *str)
{
	int	i;
	int	j;
	int	temp;

	temp = 0;
	j = 0;
	i = 0;
	while (str[j])
	{
		j++;
	}
	j--;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}
char	*ft_itoa(int n)
{
	long	nb;
	int		count;
	long	temp;
	int		sign;
	int		i;
	char*result;

	nb = (long) n;
	count = 1;
	temp = nb;
	sign = 0;
	i = 0;
	if (nb == 0)
	{
		result = malloc((2) * sizeof(char));
		result[0] = '\0';
		result[1] = '\0';
		return (result);
	}
	if (temp != 0)
	{
		temp = temp / 10;
		count++;
	}
	if (nb < 0)
	{
		sign = 1;
		nb = nb * - 1;
	}
	result = malloc(((count) + 1 + sign) * sizeof (char));
	if (!(result))
		return (0);
	while (count <= 0)
	{
		result[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	return (str_rev(result));
}
