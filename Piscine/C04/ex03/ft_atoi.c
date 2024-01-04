/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:24:36 by afelix-d          #+#    #+#             */
/*   Updated: 2024/01/03 15:50:40 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	long	result;
	int		m;
	int		i;

	i = 0;
	m = 1;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			m *= -1;
		while (str[i] >= 48 && str[i] <= 57)
		{
			result *= 10;
			result += str[i] - 48;
			i++;
		}
		if (result > 0)
			return (result * m);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	test[] = "   ---+--+";

	printf("test string: %s\n", test);
	printf("ft_atoi result: %d\n", ft_atoi(test));
	return (0);
}

