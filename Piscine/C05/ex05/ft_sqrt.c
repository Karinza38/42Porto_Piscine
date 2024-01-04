/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:16:19 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/24 13:54:50 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	result;

	i = 2;
	result = nb;
	if (result <= 0)
		return (0);
	if (result == 1)
		return (1);
	if (result >= 2)
	{
		while (i * i <= result)
		{
			if (i * i == result)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("sqrt of 9: %d\n", ft_sqrt(9));
	printf("sqrt of 25: %d\n", ft_sqrt(25));
	printf("sqrt of 30: %d\n", ft_sqrt(30));
	printf("sqrt of 625: %d\n", ft_sqrt(625));
	printf("sqrt of 0: %d\n", ft_sqrt(0));
	printf("sqrt of -2: %d\n", ft_sqrt(-2));
	return (0);
}
*/
