/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 23:03:33 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/10 23:57:52 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
	return (0);
}
