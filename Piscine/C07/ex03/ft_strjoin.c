/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:47:14 by afelix-d          #+#    #+#             */
/*   Updated: 2024/01/03 15:14:16 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

int	total_length(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i++]);
		len += ft_strlen(sep);
	}
	len -= ft_strlen(sep);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		len;

	if (size == 0)
	{
		return ((char *) malloc(sizeof(char)));
	}
	i = 0;
	len = total_length(size, strs, sep);
	str = malloc(len * sizeof(char) + 1);
	if (str == NULL)
		return (0);
	while (i < size)
	{
		ft_strcat(str, strs[i++]);
		if (i < size)
			ft_strcat(str, sep);
	}
	str[len] = '\0';
	return (str);
}
/*
int	main(void)
{
	int		i;
	int		size;
	char	**strs;
	char	*sep;
	char	*result;

	i = 0;
	size = 5;
	sep = "xyz";
	strs = (char **) malloc(size * sizeof(char *));
	while (i < 5)
		strs[i++] = (char *) malloc(5 * sizeof(char) + 1);
	strs[0] = "";
	strs[1] = "";
	strs[2] = "";
	strs[3] = "";
	strs[4] = "";
	i = 0;
	while (i < size)
		printf("%s\n", strs[i++]);
	printf("size: %d\nsep: %s\n", size, sep);
	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	free(result);
	return (0);
}
*/
