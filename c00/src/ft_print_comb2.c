/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:19:32 by jquicuma          #+#    #+#             */
/*   Updated: 2024/05/15 11:19:33 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void    ft_print_comb2(void)
{
    int a;
    int b;
    
    a = 0;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_putchar(a / 10 + '0');
            ft_putchar(a % 10 + '0');
            ft_putchar(' ');
            ft_putchar(b / 10 + '0');
            ft_putchar(b % 10 + '0');
            if (a != 98)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            b++;
        }
        a++;
    }
}
