/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:12:39 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/28 16:56:55 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

int     ft_strlen(char *str);
char    *ft_strdup(char *src);
struct  s_stock_str     *ft_strs_to_tab(int ac, char **av);
void    ft_putnbr(int nb);
void    ft_putstr(char *str);
void    ft_show_tab(struct s_stock_str *par);

#endif
