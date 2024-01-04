/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:57:08 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/26 17:28:35 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (0);
	array = (int *) malloc((max - min) * sizeof(int));
	i = 0;
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*array;

	min = 1;
	max = 5;
	i = 0;
	array = ft_range(min, max);
	while (i < (max - min))
		printf("%d ", array[i++]);
	printf("\n");
	return (0);
}
*/
