/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:36:10 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/18 19:25:15 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "NOTVOID";
	char	str2[] = "notvoid";
	char	str3[] = "NAotvOid";
	char	str4[] = "N0tV0id";
	char	str5[] = "";

	printf("str1:%d\n", ft_str_is_uppercase(str1));
	printf("str2:%d\n", ft_str_is_uppercase(str2));
	printf("str3:%d\n", ft_str_is_uppercase(str3));
	printf("str4:%d\n", ft_str_is_uppercase(str4));
	printf("str5:%d\n", ft_str_is_uppercase(str5));
	return (0);
}
*/
