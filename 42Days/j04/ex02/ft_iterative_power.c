/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 13:50:54 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/05 13:13:55 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		b;

	i = 1;
	b = nb;
	if (power < 0)
		return (0);
	if (power == 0)
	{
		return (1);
	}
	while (i != power)
	{
		nb *= b;
		i++;
	}
	return (nb);
}
