/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:18:43 by aguisy            #+#    #+#             */
/*   Updated: 2022/09/30 10:53:49 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*str;

	i = 0;
	str = malloc(sizeof(int) * (max - min));
	if (!str)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	return (str);
}
