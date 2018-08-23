/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 10:20:55 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/19 12:34:45 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char						*ft_strdup(char *src)
{
	char	*tab;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (src[i])
		i++;
	tab = malloc(sizeof(char) * (i + 1));
	while (j < i)
	{
		tab[j] = src[j];
		j++;
	}
	tab[i] = '\0';
	return (tab);
}

struct s_stock_par			*ft_param_to_tab(int argc, char **argv)
{
	int			i;
	int			j;
	t_stock_par	*tab1;

	i = 0;
	if (!(tab1 = (t_stock_par*)malloc(sizeof(t_stock_par) * (argc + 1))))
		return (0);
	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		tab1[i].copy = ft_strdup(argv[i]);
		tab1[i].size_param = j;
		tab1[i].tab = ft_split_whitespaces(argv[i]);
		tab1[i].str = argv[i];
		i++;
	}
	tab1[i].str = 0;
	return (tab1);
}
