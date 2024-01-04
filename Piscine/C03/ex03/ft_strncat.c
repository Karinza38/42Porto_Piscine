/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:28:07 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/19 18:03:37 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	s1[] = "WALL";
	char	s1_copy[] = "WALL";
	char	s2[] = "-E";

	printf("s1: %s\ns1_copy for strncat: %s\ns2: %s\n", s1, s1_copy, s2);
	printf("s1 + s2 with ft_strncat: %s\n", ft_strncat(s1, s2, 1));
	printf("s1_copy + s2 with strncat: %s\n", strncat(s1_copy, s2, 1));
	return (0);
}
*/
