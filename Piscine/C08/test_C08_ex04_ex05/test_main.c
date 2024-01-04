/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:01:32 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/28 17:29:45 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

struct  s_stock_str     *ft_strs_to_tab(int ac, char **av);

void    ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	int		n;
	int		i;
	char	**matrix;

	n = 5;
	i = 0;
	matrix = malloc(n * sizeof(char *));
	while (i < n)
		matrix[i++] = malloc(n * sizeof(char) + 1);
	matrix[0] = "test1";
	matrix[1] = "test2";
	matrix[2] = "test3";
	matrix[3] = "test4";
	matrix[4] = "test5";
	ft_show_tab(ft_strs_to_tab(n, matrix));
	return (0);
}
