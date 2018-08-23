/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 10:20:55 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/20 17:18:09 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb = -147483648;
			ft_putchar('2');
		}
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + 48);
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;
	int		j;

	i = 0;
	while (par[i].str)
	{
		j = 0;
		while (par[i].copy[j])
		{
			ft_putchar(par[i].copy[j]);
			j++;
		}
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
		i++;
	}
}
