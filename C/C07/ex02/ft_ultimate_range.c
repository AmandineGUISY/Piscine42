/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:31:42 by aguisy            #+#    #+#             */
/*   Updated: 2022/10/06 15:05:48 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	m;

	i = 0;
	m = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!range)
		return (-1);
	while (m < max)
	{
		(*range)[i] = m;
		m++;
		i++;
	}
	return (max - min);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*ok;

	printf("%i\n", ft_ultimate_range(&ok, 4, 7));
	return (0);	
}*/
