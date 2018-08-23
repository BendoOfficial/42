/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 15:36:33 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/03 00:29:06 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int lettre;

	lettre = 'z';
	while (lettre != 'a')
	{
		ft_putchar(lettre);
		lettre--;
	}
	ft_putchar(lettre);
}
