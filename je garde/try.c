/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:40:42 by aguisy            #+#    #+#             */
/*   Updated: 2022/09/29 23:29:40 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_jenespas(int	taille)
{
	int	mid = taille - 1;
	int	a = 0;
	int	i = 0;
	int	line_total = 0;
	while (line_total < taille)
	{
		while (i < (mid - a))
		{
			printf(" ");
			i++;
		}
		while (i >= (mid - a) && i <= (mid + a))
		{
			printf("*");
			i++;
		}
		while (i < ((taille * 2) - 1))
		{
			printf(" ");
			i++;
		}
		printf("\n");
		a++;
		i = 0;
		line_total++;
	}
}



int	main(void)
{
	ft_jenespas(100);
	return (0);
}
