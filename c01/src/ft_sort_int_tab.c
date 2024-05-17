/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:12:26 by jquicuma          #+#    #+#             */
/*   Updated: 2024/05/16 12:12:28 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void    ft_sort_int_tab(int *tab, int size)
{
    int     n;

    n = 0;
    while (n < size)
    {
        if (tab[n] > tab[n + 1])
        {
            ft_swap(&tab[n], &tab[n + 1]);
            n = 0;
        }
        else
            n++;
    }
    
}
