/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:11:35 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/23 16:16:56 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	i = nb - 1;
	if (i > 1)
		nb *= ft_recursive_factorial(i);
	return (nb);
}
/*
int	main(void)
{
	printf("5! = %d\n", ft_recursive_factorial(5));
	return (0);
}
*/
