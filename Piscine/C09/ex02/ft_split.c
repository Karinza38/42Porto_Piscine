/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:48:33 by afelix-d          #+#    #+#             */
/*   Updated: 2024/01/02 15:34:53 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_sep(str[i], charset) == 1)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && check_sep(str[i], charset) == 0)
			i++;
	}
	return (count);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && check_sep(str[i], charset) == 0)
		i++;
	return (i);
}

char	*ft_allocstr(char *str, char *charset)
{
	int		i;
	int		len;
	char	*allocstr;

	len = ft_strlen(str, charset);
	allocstr = malloc(len * sizeof(char) + 1);
	if (allocstr == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		allocstr[i] = str[i];
		i++;
	}
	allocstr[i] = '\0';
	return (allocstr);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**matrix;

	matrix = malloc(count_strings(str, charset) * sizeof(char *) + 1);
	if (matrix == NULL)
		return (0);
	i = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && check_sep(*str, charset) == 1)
			str++;
		if (*str != '\0')
		{
			matrix[i] = ft_allocstr(str, charset);
			i++;
		}
		while (*str != '\0' && check_sep(*str, charset) == 0)
			str++;
	}
	matrix[i] = 0;
	return (matrix);
}
/*
int	main(void)
{
	int		i;
	char	**matrix;
	char	str[] = "ABCDEFG...abcdefg...VWXYZ...vwxyz";
	char	charset[] = "...";

	matrix = ft_split(str, charset);
	i = 0;
	while (matrix[i] != 0)
		printf("%s\n", matrix[i++]);
	return (0);

}
*/
