/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 17:12:30 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/07 17:45:48 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_str_is_printable(char *str)
{
	int		i;
	int		bl;

	i = 0;
	bl = 0;
	if (ft_strlen(str) == 0)
		return (1);
	while (str[i])
	{
		if (str[i] > 32 && str[i] < 127)
		{
			bl = 1;
		}
		else
		{
			bl = 0;
			return (0);
		}
		i++;
	}
	return (1);
}
