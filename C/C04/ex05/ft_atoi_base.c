/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:13:33 by aguisy            #+#    #+#             */
/*   Updated: 2022/10/05 00:09:30 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (1);
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	index_base(char str, char *base)
{
	int	j;

	j = 0;
	while (base[j] != '\0')
	{
		if (str == base[j])
			return (0);
		j++;
	}
	return (1);
}

int	ft_index(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i] != str)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{	
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (check_base(base) == 1)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (index_base(str[i], base) == 0)
	{
		result = result * base_len(base) + ft_index(str[i], base);
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int     main(int ac, char **av)
{
 	(void)ac;
    printf("%d\n", ft_atoi_base(av[1], av[2]));
    return (0);
}*/
