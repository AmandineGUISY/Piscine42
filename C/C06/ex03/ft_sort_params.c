/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:36:48 by aguisy            #+#    #+#             */
/*   Updated: 2022/09/28 22:58:53 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_lookswap(char *S1, char *S2)
{
	int	i;

	i = 0;
	while (S1[i] != '\0' && S2[i] != '\0' && S1[i] == S2[i])
		i++;
	return (S1[i] - S2[i]);
}

void	ft_swap(char **S1, int i, int j)
{
	char	*swap;

	swap = S1[i];
	S1[i] = S1[j];
	S1[j] = swap;
}

void	ft_putchar_str(char *S1)
{
	int	i;

	i = 0;
	while (S1[i] != '\0')
	{
		write(1, &S1[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc == 1)
		return (0);
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_lookswap(argv[i], argv[j]) >= 1)
				ft_swap(argv, i, j);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putchar_str(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
