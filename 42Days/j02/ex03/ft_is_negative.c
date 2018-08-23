/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 16:18:49 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/01 20:13:23 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char rep;

	rep = 'N';
	if (n < 0)
	{
		ft_putchar(rep);
	}
	else
	{
		rep = 'P';
		ft_putchar(rep);
	}
}
