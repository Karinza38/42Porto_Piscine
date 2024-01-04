/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:29:37 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/23 18:32:47 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int		i;
	long	result;

	result = nb;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (i < power)
		result *= ft_recursive_power(nb, power - 1);
	return (result);
}
/*
int	main(void)
{
	printf("5^5 = %d\n", ft_recursive_power(5, 5));
	return (0);
}
*/
