/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 17:11:06 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/07 17:43:22 by bepintea         ###   ########.fr       */
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

int		ft_str_is_uppercase(char *str)
{
	int		i;
	int		bl;

	i = 0;
	bl = 0;
	if (ft_strlen(str) == 0)
		return (1);
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
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
