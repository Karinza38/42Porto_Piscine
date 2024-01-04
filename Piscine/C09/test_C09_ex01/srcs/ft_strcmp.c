/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:02:33 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/19 17:02:30 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "Same!";
	char	s2[] = "Same!";
	char	s3[] = "Same not!";

	printf("s1: %s\ns2: %s\ns3: %s\n", s1, s2, s3);
	printf("ft_strcmp s1,s2: %d\n", ft_strcmp(s1, s2));
	printf("strcmp s1,s2: %d\n", strcmp(s1, s2));
	printf("ft_strcmp s1,s3: %d\n", ft_strcmp(s1, s3));
	printf("strcmp s1,s3: %d\n", strcmp(s1, s3));
	printf("ft_strcmp s3,s2: %d\n", ft_strcmp(s3, s2));
	printf("strcmp s3,s2: %d\n", strcmp(s3, s2));
	return (0);
}
*/
