/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:33:36 by aguisy            #+#    #+#             */
/*   Updated: 2022/09/21 14:27:50 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int    i;
    int    j;
    int    k;

    i = 0;
    j = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0')
    {
        k = i;
        while (str[k] == to_find[j] && to_find[j] != '\0')
        {
            j++;
            k++;
        }
        if (to_find[j] == '\0')
            return (str + i);
        j = 0;
        i++;
    }
    return (NULL);
}


int	main(void)
{
	//printf("%s\n",ft_strstr(ex, exTf));
	
	char	ex2[] = "Bonjour tout otut";
	char	exTf2[] = "a";
	printf("%s\n", ft_strstr(ex2, exTf2));
	return (0);
	
}
