/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:36:10 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/18 19:35:15 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char	str1[] = "Pr1nT @b|e";
	char	str2[] = "Nót";
	char	str3[] = "PrïntáblÉ";
	char	str4[] = "";

	printf("str1:%d\n", ft_str_is_printable(str1));
	printf("str2:%d\n", ft_str_is_printable(str2));
	printf("str3:%d\n", ft_str_is_printable(str3));
	printf("str4:%d\n", ft_str_is_printable(str4));
	return (0);
}
*/
