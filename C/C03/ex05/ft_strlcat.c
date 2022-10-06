/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:35:27 by aguisy            #+#    #+#             */
/*   Updated: 2022/09/26 10:17:15 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;
	int				k;
	unsigned int	l;

	i = 0;
	j = 0;
	k = 0;
	while (src[i] != '\0')
		i++;
	while (dest[k] != '\0')
		k++;
	l = k;
	if (size <= k || size == 0)
		return (size + i);
	while (src[j] != '\0' && (j < size - l - 1))
	{	
		dest[k] = src[j];
		j++;
		k++;
	}
	dest[k] = '\0';
	return (l + i);
}
