/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <aguisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:21:40 by aguisy            #+#    #+#             */
/*   Updated: 2022/10/06 15:12:00 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_len_all(char **strs, char *sep, int size)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		count = count + ft_len(strs[i]);
		i++;
	}
	i = (i - 1) * ft_len(sep);
	count = count + i;
	return (count);
}

char	*create_str(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	j;
	int	l;
	int	k;

	k = 0;
	i = 0;
	while (k < ft_len_all(strs, sep, size))
	{
		j = 0;
		l = 0;
		while (strs[i][j] != '\0')
		{
			str[k] = strs[i][j];
			j++;
			k++;
		}
		while (sep[l] != '\0' && k < ft_len_all(strs, sep, size))
		{
			str[k] = sep[l++];
			k++;
		}
		i++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (size == 0)
	{	
		str = malloc(sizeof(char) * 1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = malloc(sizeof(char) * (ft_len_all(strs, sep, size) + 1));
	if (str == NULL)
		return (NULL);
	str = create_str(size, strs, sep, str);
	str[ft_len_all(strs, sep, size)] = '\0';
	return (str);
}
/*
#include <unistd.h>

int	main(int argc, char *argv[])
{
	//int		size;
	//char	*strs[] = {"", "", ""};
	//char	sep[] = " , ";
	int		i;
	char	*str;

//	size = 3;
	i = 0;
	str = ft_strjoin(argc, argv, "@@");
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}*/
