/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:42:44 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/21 20:21:22 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	errorcheck(char *str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(str);
	if (str[0] == '\0' || len == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] >= 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	error;

	error = errorcheck(base);
	len = ft_strlen(base);
	if (error == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
			ft_putnbr_base(nbr, base);
		}
		else if (nbr < len)
			ft_putchar(base[nbr]);
		else
		{
			ft_putnbr_base(nbr / len, base);
			ft_putnbr_base(nbr % len, base);
		}
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	m;
	int	i;

	i = 0;
	m = 1;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			m *= -1;
		while (str[i] >= 48 && str[i] <= 57)
		{
			result *= 10;
			result += str[i] - 48;
			i++;
		}
		if (result > 0)
		{
			ft_putnbr_base(result * m, base);
			return (0);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	ft_atoi_base("   -+---84ab23", "01");
	printf("\n");
	ft_atoi_base("   +++82xy7", "poneyvif");
	printf("\n");
	ft_atoi_base(" ---+987123", "0123456789");
	printf("\n");
	ft_atoi_base("AB132", "0123456789ABCDEF");
	return (0);
}
*/
