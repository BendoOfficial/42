/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 13:50:56 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/07 17:20:34 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while ((str[i + j] >= 'a' && str[i + j] <= 'z') ||
				(str[i + j] >= 'A' && str[i + j] <= 'Z'))
		{
			j++;
			if ((str[i] >= 'a' && str[i] <= 'z') &&
					!(str[i - 1] >= '0' && str[i - 1] <= '9'))
			{
				str[i] = str[i] - 32;
			}
			if ((str[i + j] >= 'A') && (str[i + j] <= 'Z'))
			{
				str[i + j] = str[i + j] + 32;
			}
		}
		i = i + j + 1;
	}
	return (str);
}
