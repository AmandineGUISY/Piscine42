/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:12:41 by aguisy            #+#    #+#             */
/*   Updated: 2022/09/19 22:09:29 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0) && (str[i] > 96) && (str[i] < 123))
			str[i] = str[i] - 32;

		if (((str[i - 1] > 0 && str[i - 1] < 48) || (str[i - 1] > 57 && str[i - 1] < 65) ||
			(str[i - 1] > 90 && str[i - 1] < 97) ||
		       	(str[i - 1] > 122)) && 
			((str[i] > 96) && (str[i] < 123)))
		{
			str[i] = str[i] - 32;
		}
		if (((str[i - 1] > 64 && str[i - 1] < 91) || (str[i - 1] > 96 && str[i - 1] < 123))
				&& (str[i] > 64 && str[i] < 91))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}	
	return str;
}

int	main(void)
{
	char	str[] = "Salut ! comMent tu vas mon45pote)oO ?>a";
	
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
