/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 15:03:24 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/07 16:56:38 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_vspace(char c)
{
	if (c >= 1 && c <= 32)
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int		nb;
	int		negatif;

	nb = 0;
	negatif = 1;
	while (ft_vspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*(str + 1) >= '0' && *(str + 1) <= '9')
		{
			if (*str == '-')
				negatif = -1;
			str++;
		}
		else
			return (0);
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + *str - 48;
		str++;
	}
	nb = nb * negatif;
	return (nb);
}
