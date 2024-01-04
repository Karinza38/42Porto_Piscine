/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:10:09 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/28 17:46:19 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	dest = malloc(ft_strlen(src) * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*str_tab;

	str_tab = malloc(ac * sizeof(struct s_stock_str) + 1);
	if (str_tab == NULL)
	{
		return (str_tab);
	}
	i = 0;
	while (i < ac)
	{
		str_tab[i].size = ft_strlen(av[i]);
		str_tab[i].str = malloc(ft_strlen(av[i]) * sizeof(char) + 1);
		if (!str_tab[i].str)
			return (0);
		str_tab[i].str = av[i];
		str_tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	str_tab[i].str = 0;
	return (str_tab);
}
