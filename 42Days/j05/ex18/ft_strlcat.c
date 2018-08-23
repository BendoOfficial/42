/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <bepintea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 13:04:56 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/09 02:48:37 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[i] != 0 && i < size)
		i++;
	while (src[j] != 0 && (i + j) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	if ((i + j) < size)
		dest[i + j] = '\0';
	return (ft_strlen(src) + i);
}
