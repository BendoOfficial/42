/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 17:19:31 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/04 17:20:16 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	*ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	size -= 1;
	while (i < size)
	{
		temp = str[size];
		str[size] = str[i];
		str[i] = temp;
		i++;
		size--;
	}
	return (str);
}
