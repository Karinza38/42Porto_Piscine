/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:08:36 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/23 18:19:32 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("Is 0 prime? %d\n", ft_is_prime(0));
	printf("Is 1 prime? %d\n", ft_is_prime(1));
	printf("Is -2 prime? %d\n", ft_is_prime(-2));
	printf("Is 2 prime? %d\n", ft_is_prime(2));
	printf("Is 3 prime? %d\n", ft_is_prime(3));
	printf("Is 80 prime? %d\n", ft_is_prime(80));
	printf("Is 97 prime? %d\n", ft_is_prime(97));
	return (0);
}
*/
