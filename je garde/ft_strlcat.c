/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:35:27 by aguisy            #+#    #+#             */
/*   Updated: 2022/09/21 19:32:59 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;
	int				k;

	i = 0;
	j = 0;
	k = 0;
	while (src[i] != '\0')
		i++;
	while (dest[k] != '\0')
		k++;
	while (src[j] != '\0' && j < size - 1)
	{	
		dest[k] = src[j];
		j++;
		k++;
	}
	if (j < size - 1)
		dest[k] = '\0';
	return (k);
}

int main(void)
{
	char	src[] = "abcdefg";
	char	dest[40] = "hijkl";

	printf("%d\n", ft_strlcat(dest, src, 12));

	//char src1[] = "abcdefg";
	//char dest1[40] = "hijkl";
	//printf("%ld\n", strlcat(dest1, src1, 12));	
}

