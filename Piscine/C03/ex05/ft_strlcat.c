/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:28:07 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/21 17:05:32 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <bsd/string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest_len = i;
	while (src[j] != '\0' && j < nb - dest_len - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	src_len = ft_strlen(src);
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char	s1[] = "WALL";
	char	s1_copy[] = "WALL";
	char	s2[] = "-Erad";

	printf("s1: %s\ns2: %s\n", s1, s2);
	printf("s1 + s2 with ft_strlcat: %d\n", ft_strlcat(s1, s2, 6));
	printf("s1 + s2 with strlcat: %zu\n", strlcat(s1_copy, s2, 6));
	return (0);
}
*/
