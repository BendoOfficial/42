/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 03:32:20 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/05 03:36:38 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		c;

	c = 1;
	i = 0;
	while (c == 1)
	{
		c = 0;
		while (i < size - 1)
		{
			if (tab[i + 1] < tab[i])
			{
				tab[i + 1] = tab[i + 1] + tab[i];
				tab[i] = tab[i + 1] - tab[i];
				tab[i + 1] = tab[i + 1] - tab[i];
				c = 1;
			}
			i++;
		}
		i = 0;
	}
}
