/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 12:17:04 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/05 13:10:03 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;

	i = nb;
	if (nb == 0)
	{
		return (1);
	}
	if (i < 0 || i >= 13)
	{
		return (0);
	}
	while (i != 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}
