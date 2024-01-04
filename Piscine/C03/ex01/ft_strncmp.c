/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:02:33 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/23 15:54:36 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		result = s1[i] - s2[i];
		if (result != 0)
			return (result);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "Scme!";
	char	s2[] = "Sa";
	char	s3[] = "Samenot!";

	printf("s1: %s\ns2: %s\ns3: %s\n", s1, s2, s3);
	printf("ft_strncmp s1,s2: %d\n", ft_strncmp(s1, s2, 5));
	printf("strncmp s1,s2: %d\n", strncmp(s1, s2, 5));
	printf("ft_strncmp s1,s3: %d\n", ft_strncmp(s1, s3, 4));
	printf("strncmp s1,s3: %d\n", strncmp(s1, s3, 4));
	printf("ft_strncmp s3,s2: %d\n", ft_strncmp(s3, s2, 6));
	printf("strncmp s3,s2: %d\n", strncmp(s3, s2, 6));
	return (0);
}
*/
