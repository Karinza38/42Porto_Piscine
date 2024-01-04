/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:36:10 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/18 19:03:24 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
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
	char	str3[] = "NotVoid";
	char	str4[] = "Not void but with spaces";
	char	str5[] = "N0tV0id";
	char	str6[] = "";

	printf("str1:%d\n", ft_str_is_alpha(str1));
	printf("str2:%d\n", ft_str_is_alpha(str2));
	printf("str3:%d\n", ft_str_is_alpha(str3));
	printf("str4:%d\n", ft_str_is_alpha(str4));
	printf("str5:%d\n", ft_str_is_alpha(str5));
	printf("str6:%d\n", ft_str_is_alpha(str6));
	return (0);
}
*/
