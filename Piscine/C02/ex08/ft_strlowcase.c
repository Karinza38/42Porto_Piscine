/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:58:02 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/18 20:14:12 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str1[] = "UPPERCASE";
	char	str2[] = "lowercase";
	char	str3[] = "MiXeD CaSe!";

	printf("str1 original: %s\n", str1);
	printf("str1 altered: %s\n", ft_strlowcase(str1));
	printf("str2 original: %s\n", str2);
	printf("str2 altered: %s\n", ft_strlowcase(str2));
	printf("str3 original: %s\n", str3);
        printf("str3 altered: %s\n", ft_strlowcase(str3));
	return (0);
}
*/
