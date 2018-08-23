/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 01:50:09 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/16 16:18:26 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		i;
	int		nb;

	if (min >= max)
		return (0);
	nb = max - min;
	tab = (int*)malloc(sizeof(*tab) * (nb));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	tab[i] = '\0';
	*range = tab;
	return (i);
}
