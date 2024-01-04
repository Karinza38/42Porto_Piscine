/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:50:28 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/24 13:00:19 by afelix-d         ###   ########.fr       */
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

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac >= 2)
	{
		while (av[i] != NULL)
			i++;
		while (i > 1)
		{
			ft_putstr(av[i - 1]);
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
