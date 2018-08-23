/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 22:44:47 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/03 00:38:53 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_affiche(char a, char b, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(d);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_affiche(a, b, c);
				if (a != '7' | b != '8' | c != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
