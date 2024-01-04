/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:14:48 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/15 13:44:26 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(int n1, int n2)
{
	int	d1;
	int	d2;
	int	d3;
	int	d4;

	d1 = 48 + n1 / 10;
	d2 = 48 + n1 % 10;
	d3 = 48 + n2 / 10;
	d4 = 48 + n2 % 10;
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, " ", 1);
	write(1, &d3, 1);
	write(1, &d4, 1);
	if (n1 < 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_print_comb(n1, n2);
			n2++;
		}
		n1++;
	}
	write(1, "\n", 1);
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
