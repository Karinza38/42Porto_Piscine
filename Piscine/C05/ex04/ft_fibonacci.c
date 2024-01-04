/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:53:06 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/23 17:14:46 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;

	i = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	if (index > 2)
	{
		i += ft_fibonacci(index - 1);
		i += ft_fibonacci(index - 2);
	}
	return (i);
}
/*
int	main(void)
{
	printf("Fibonacci index 3: %d\n", ft_fibonacci(3));
	printf("Fibonacci index 19: %d\n", ft_fibonacci(19));
	return (0);
}
*/
