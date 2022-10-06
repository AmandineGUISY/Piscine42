/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 23:11:22 by aguisy            #+#    #+#             */
/*   Updated: 2022/09/23 08:59:05 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	abscisse(int i, int j, char **argv)
{
	while (argv[j][i] != '\0')
	{
		ft_putchar(argv[j][i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		abscisse(i, j, argv);
		ft_putchar('\n');
		j++;
	}
	return (0);
}
