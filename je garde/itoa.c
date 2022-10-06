/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:03:01 by aguisy            #+#    #+#             */
/*   Updated: 2022/10/05 15:39:32 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(long n)
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
		n = n / 10;
		i++;
	}
	return (i);
}

int	power(long n)
{
	int	i;

	i = 1;
	while (n > 10)
	{
		i = i * 10;
		n = n / 10;
	}
	return (i);
}

char	*itoa(long n)
{
	int	i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (ft_len(n) + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		str[i] = '-';
		i++;
	}
	while (n > 0)
	{
		str[i] = (n / power(n)) + '0';
		n = n % power(n);
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", itoa(2147483648));
}
