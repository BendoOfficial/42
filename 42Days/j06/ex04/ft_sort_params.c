/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 00:55:19 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/11 00:04:12 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_affiche(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s2[i] || s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	j = 1;
	while (j == 1)
	{
		i = 1;
		j = 0;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i + 1], argv[i]) < 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				j = 1;
			}
			i++;
		}
		i = 0;
	}
	ft_affiche(argc, argv);
	return (0);
}
