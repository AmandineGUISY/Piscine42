/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:03:34 by aguisy            #+#    #+#             */
/*   Updated: 2022/09/28 12:22:59 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	n = nb;
	while (i < power)
	{
		nb = nb * n;
		i++;
	}
	return (nb);
}
