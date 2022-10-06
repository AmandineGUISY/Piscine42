/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:12:41 by aguisy            #+#    #+#             */
/*   Updated: 2022/09/21 20:26:29 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_charlowcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_charupcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_is_alpha_num(char c)
{
	if (ft_charlowcase(c) || ft_charupcase(c) || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (ft_charlowcase(str[i]) == 1 && flag == 1)
			str[i] = str[i] - 32;
		if (ft_charupcase(str[i]) == 1 && flag == 0)
			str[i] = str[i] + 32;
		if (ft_is_alpha_num(str[i]) == 1)
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}
