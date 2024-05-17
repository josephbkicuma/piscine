/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:34:28 by jquicuma          #+#    #+#             */
/*   Updated: 2024/05/15 12:34:29 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void    ft_ft(int *nbr);
void    ft_ultimate_ft(int *********nbr);
void    ft_swap(int *a, int *b);
void    ft_div_mod(int a, int b, int *div, int *mod);
void    ft_ultimate_div_mod(int *a, int *b);
void    ft_putstr(char *str);
int     ft_strlen(char *str);
void    ft_rev_int_tab(int *tab, int size);
void    ft_sort_int_tab(int *tab, int size);

#endif