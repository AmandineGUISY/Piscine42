/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:37:53 by aguisy            #+#    #+#             */
/*   Updated: 2022/10/01 13:29:54 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	if (nb == 4)
		return (2);
	if (nb == 1)
		return (1);
	while (n < nb / 3 && n <= 46340)
	{
		if (nb == n * n && nb % n == 0)
			return (n);
		n++;
	}
	return (0);
}
