/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.6.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 10:26:39 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/16 16:18:51 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_nb_mot(char *str)
{
	int i;
	int mot;
	int test;

	mot = 0;
	i = -1;
	test = 0;
	while (str[++i] != '\0')
	{
		if ((str[i] == ' ' || str[i] == '\n'
		|| str[i] == '\t') && (str[i + 1] != ' '
		|| str[i + 1] != '\n' || str[i + 1] != '\t' || str[i + 1] != '\0'))
			mot++;
	}
	return (mot);
}

char	**ft_verifreplace(char *str, char **tab2, int i, int j)
{
	while ((str[i - 1] == ' ' || str[i - 1] == '\n'
	|| str[i - 1] == '\t') && str[i] == '\0')
	{
		tab2[j - 1] = 0;
		i--;
	}
	tab2[j] = 0;
	return (tab2);
}

char	**ft_replace(char *str, char **tab2, int taille)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			i++;
		}
		while (str[i] != ' ' && str[i] != '\n'
		&& str[i] != '\t' && str[i] != '\0')
		{
			tab2[j][taille] = str[i];
			i++;
			taille++;
		}
		tab2[j][taille] = '\0';
		taille = 0;
		j++;
	}
	ft_verifreplace(str, tab2, i, j);
	return (tab2);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		taille;
	char	**tab2;

	j = 0;
	taille = ft_nb_mot(str);
	taille++;
	if (!(tab2 = (char**)malloc(sizeof(tab2) * (taille + 1))))
		return (0);
	j = ft_strlen(str);
	i = 0;
	while (i < taille)
	{
		if (!(tab2[i] = (char*)malloc(sizeof(*tab2) * (j + 1))))
			return (0);
		i++;
	}
	taille = 0;
	ft_replace(str, tab2, taille);
	tab2[j] = 0;
	return (tab2);
}
