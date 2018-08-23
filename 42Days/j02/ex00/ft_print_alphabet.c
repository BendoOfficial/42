/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 13:32:40 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/03 00:30:11 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;
	int		i;

	c = 'a';
	i = 0;
	while (i < 26)
	{
		ft_putchar(c);
		i++;
		c++;
	}
}
