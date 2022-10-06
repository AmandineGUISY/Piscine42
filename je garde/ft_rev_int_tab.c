/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:50:09 by aguisy            #+#    #+#             */
/*   Updated: 2022/09/19 15:32:55 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i < size / 2)
	{
		c = tab[size-1];
		tab[size-1] = tab[i];
		tab[i] = c;
		size--;
		i++;
	}
}

int	main(void)
{
	int	tab[9] = {8, 5, 7, 8, 7, 8, 8, 8, 9};
	int	i;
	int	size;

	size = 9;
	i = 0;
	ft_rev_int_tab(tab, 9);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
