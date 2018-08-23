/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 13:51:20 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/05 13:56:07 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int		i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
	{
		return (1);
	}
	nb = i * ft_recursive_power(nb, (power - 1));
	return (nb);
}
