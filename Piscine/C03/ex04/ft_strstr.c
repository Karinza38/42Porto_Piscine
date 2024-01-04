/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:08:21 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/19 19:22:49 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
/*
int	main(void)
{
	char	haystack[] = "ABCDEFGH";
	char	copy1_haystack[] = "ABCDEFGH";
	char	copy2_haystack[] = "ABCDEFGH";
	char	copy3_haystack[] = "ABCDEFGH";
	char	needle1[] = "CDEF";
	char	copy_needle1[] = "CDEF";
	char	needle2[] = "CDeF";
	char	copy_needle2[] = "CDeF";

	printf("haystack: %s\n", haystack);
	printf("needle1: %s\nneedle2: %s\n", needle1, needle2);
	printf("ft_strstr needle1: %s\n", ft_strstr(haystack, needle1));
	printf("strstr needle1: %s\n", strstr(copy1_haystack, copy_needle1));
	printf("ft_strstr needle2: %s\n", ft_strstr(copy2_haystack, needle2));
	printf("strstr needle2: %s\n", strstr(copy3_haystack, copy_needle2));
	return (0);
}
*/
