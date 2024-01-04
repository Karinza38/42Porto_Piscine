/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:16:41 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/26 18:46:21 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (0);
	array = (int *) malloc((max - min) * sizeof(int));
	if (array == NULL)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (max - min);
}
/*
int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	i;
	int	minmax;

	min = 1;
	max = 5;
	minmax = ft_ultimate_range(&range, min, max);
	i = 0;
	while (i < minmax)
		printf("%d ",range[i++]);
	printf("range: %d\n", minmax);
	return (0);
}
*/
