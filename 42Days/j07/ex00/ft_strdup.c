/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 00:28:49 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/16 16:17:58 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
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
