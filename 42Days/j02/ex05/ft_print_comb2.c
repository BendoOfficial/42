/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 01:04:11 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/03 01:05:28 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putchar_affiche(int nb)
{
	int		a;
	int		b;

	if (nb > 9)
	{
		a = nb / 10;
		b = nb % 10;
		ft_putchar(a + 48);
		ft_putchar(b + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int		p1;
	int		p2;

	p1 = 0;
	p2 = 0;
	while (p1 <= 99)
	{
		p2 = p1 + 1;
		while (p2 <= 99)
		{
			ft_putchar_affiche(p1);
			ft_putchar(' ');
			ft_putchar_affiche(p2);
			if (p1 != 98 || p2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			p2 = p2 + 1;
		}
		p1 = p1 + 1;
	}
}
