/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 15:47:11 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/05 13:56:54 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if ((nb % i) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
