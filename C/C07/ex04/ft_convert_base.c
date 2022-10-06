/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <aguisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:02:37 by aguisy            #+#    #+#             */
/*   Updated: 2022/10/05 20:16:17 by aguisy           ###   ########.fr       */
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
	while (base[i] && base[i] != str)
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
