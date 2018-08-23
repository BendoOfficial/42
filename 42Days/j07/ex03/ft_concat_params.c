/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 02:11:42 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/16 18:34:13 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count(int argc, char **argv)
{
	int i;
	int j;
	int compt;

	i = 0;
	compt = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			compt++;
			j++;
		}
		i++;
	}
	return (compt);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tab;
	int		compt;

	i = 0;
	compt = ft_count(argc, argv);
	tab = (char*)malloc(sizeof(*tab) * (compt + argc + 1));
	i = 1;
	compt = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			tab[compt] = argv[i][j];
			compt++;
			j++;
		}
		tab[compt] = '\n';
		compt++;
		i++;
	}
	tab[compt - 1] = '\0';
	return (tab);
}
