/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:36:10 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/18 19:10:20 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
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
	char	str1[] = "123";
	char	str2[] = "";
	char	str3[] = "Not number";

	printf("str1:%d\n", ft_str_is_numeric(str1));
	printf("str2:%d\n", ft_str_is_numeric(str2));
	printf("str3:%d\n", ft_str_is_numeric(str3));
	return (0);
}
*/
