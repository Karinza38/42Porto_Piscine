/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:43:04 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/24 12:49:10 by afelix-d         ###   ########.fr       */
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

	i = 1;
	while (ac >= 2 && av[i] != NULL)
	{
		ft_putstr(av[i++]);
		write(1, "\n", 1);
	}
	return (0);
}
