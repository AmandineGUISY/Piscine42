/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:33:36 by aguisy            #+#    #+#             */
/*   Updated: 2022/09/26 10:03:17 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{	
		k = i;
		while (str[k] == to_find[j] && to_find[j] != '\0')
		{
			k++;
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		j = 0;
		i++;
	}
	return (NULL);
}
