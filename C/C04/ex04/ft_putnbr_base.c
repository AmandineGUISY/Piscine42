/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:44:49 by aguisy            #+#    #+#             */
/*   Updated: 2022/09/27 10:22:13 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_erreurpn(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[j] != '\0')
		{		
			if (base[j] == base[i] && i != j)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	if (i <= 1)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		l;

	n = (long)nbr;
	l = base_len(base);
	if (ft_erreurpn(base) == 0)
	{	
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n >= 0)
		{
			if (n > l - 1)
			{
				ft_putnbr_base(n / l, base);
				ft_putchar(base [n % l]);
			}
			if (n <= l - 1)
				ft_putchar(base [n % l]);
		}
	}
}
