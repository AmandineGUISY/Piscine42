/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:03:01 by aguisy            #+#    #+#             */
/*   Updated: 2022/10/05 18:29:20 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_base(char *base);
int	base_len(char *base);
int	index_base(char str, char *base);
int	ft_index(char str, char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_len(long n, char *base)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n != 0)
	{
		n = n / base_len(base);
		i++;
	}
	return (i);
}

int	power(long n, char *base)
{
	int	i;

	i = 1;
	while (n > base_len(base))
	{
		i = i * base_len(base);
		n = n / base_len(base);
	}
	return (i);
}

char	*itoa(long n, char *base)
{
	int		i;
	char	*str;
	long	r;

	i = 0;
	str = malloc(sizeof(char) * (ft_len(n, base) + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		str[i] = '-';
		i++;
	}
	r = power(n, base);
	while (r != 0)
	{
		str[i] = base[(n / r)];
		n = n % r;
		r = r / base_len(base);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	i;
	char	*str;

	if (check_base(base_from) == 0 && check_base(base_to) == 0)
	{
		i = ft_atoi_base(nbr, base_from);
		str = itoa(i, base_to);
		return (str);
	}
	return (NULL);
}
/*
int	main(void)
{
	char	basef[] = "moncul";
	char	baset[] = "tafes";
	
	printf("%s" , ft_convert_base("  -culmon", basef, baset));

}*/
