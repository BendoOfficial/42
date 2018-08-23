/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepintea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 21:59:41 by bepintea          #+#    #+#             */
/*   Updated: 2018/08/20 22:01:41 by bepintea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <unistd.h>

typedef struct		s_stock_par
{
	int				size_param;
	char			*str;
	char			*copy;
	char			**tab;
}					t_stock_par;

void				ft_putchar(char c);
void				ft_show_tab(struct s_stock_par *par);
t_stock_par			*ft_param_to_tab(int ac, char **av);
void				ft_putnbr(int nb);
void				ft_print_words_tables(char **tab);

#endif
