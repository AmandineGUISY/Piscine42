/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:26:13 by aguisy            #+#    #+#             */
/*   Updated: 2022/10/06 15:01:03 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_charset(char *str, char *charset, int i)
{
	int	j;

	j = 0;
	while (charset[j] != '\0')
	{
		if (str[i] == charset[j])
			return (0);
		j++;
	}
	return (1);
}

int	check_sep(char *str, char *charset, int i)
{
	int	c;

	c = 0;
	while (check_charset(str, charset, i) == 0)
	{
		c++;
		i++;
	}
	return (c);
}

int	ft_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (check_charset(str, charset, i) == 0)
			i++;
		while (check_charset(str, charset, i) == 1 && str[i] != '\0')
		{	
			i++;
			if (check_charset(str, charset, i) == 0 || str[i] == '\0')
				count++;
		}
	}
	return (count);
}

char	*implement(char *split, char *str, int k, int i)
{
	int	jsp;

	jsp = 0;
	split = malloc(sizeof(char) * (i - k + 1));
	if (split == NULL)
		return (NULL);
	while (k < i)
	{
		split[jsp] = str[k];
		k++;
		jsp++;
	}
	split[jsp] = '\0';
	return (split);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		k;
	int		j;

	i = 0;
	j = 0;
	split = malloc(sizeof(char *) * (ft_word(str, charset) + 1));
	if (split == NULL)
		return (NULL);
	if (ft_word(str, charset) == 0)
		split[j] = NULL;
	while (str[i] != '\0')
	{
		while (check_charset(str, charset, i) == 0)
			i++;
		k = i;
		while (check_charset(str, charset, i) == 1 && str[i] != '\0')
			i++;
		split[j] = implement(split[j], str, k, i);
		j++;
	}
	if (split[j] != NULL)
		split[j] = '\0';
	return (split);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**res;
	int	i;
	char	test[] = "";

	//char	test[] = "t";
	//char	test[] = "";

	i = 0;
	//printf("%d\n", ft_word(test, ""));	
	res = ft_split(test, " abc");
	printf("split null = %s\n", res[0]);
	while (res[i])
        {
                printf("%s\n", res[i]);
                i++;
        }
	
	return (0);
}*/
