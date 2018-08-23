/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 13:44:24 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/05 13:54:40 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
