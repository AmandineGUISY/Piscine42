/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:11:08 by aguisy            #+#    #+#             */
/*   Updated: 2022/09/26 16:12:44 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	base_lenth(char *base)
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
			if (i == j);
			else if (base[j] == base[i])
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
	int	i;
	int	l;
	char	*result;

	i = 0;
	result[100];
	l = base_lenth(base);
	if (ft_erreurpn(base) == 0)
	{ 
		if (nbr < 0)
		{
			write (1, "-", 1);
			nbr = nbr * - 1;
		} 
		while (nbr != 0)
		{	
			result[i] = nbr % l;
			nbr = nbr / l;
			i++;
		}
		while (i != 0)
		{
			printf("i:%d\n", i);
			write (1,  &base[result[i]], 1);
			i--;
		}
	}
}

int	main(void)
{
	char	base[100] = "abcd";
	int	nbr;

	nbr = 3;
	ft_putnbr_base(nbr, base);
	return (0);
}
