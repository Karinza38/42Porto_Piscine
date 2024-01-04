/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 14:31:40 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/24 15:35:27 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i++], 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	j = ac - 1;
	if (ac >= 2)
	{
		while (i < j)
		{
			while (av[i + 1] != NULL)
			{
				if (ft_strcmp(av[i], av[i + 1]) > 0)
					ft_swap(&av[i], &av[i + 1]);
				i++;
			}
			j--;
			i = 1;
		}
		while (av[i] != NULL)
		{
			ft_putstr(av[i++]);
			write(1, "\n", 1);
		}
	}
	return (0);
}
