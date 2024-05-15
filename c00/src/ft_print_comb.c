/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:07:16 by jquicuma          #+#    #+#             */
/*   Updated: 2024/05/14 15:07:26 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void    ft_print_comb(void)
{
    int a;
    int b;
    int c;

    a = 0;
    while (a <= 7)
    {
        b = a + 1;
        while(b <= 8)
        {
            c = b + 1;
            while (c <= 9)
            {
                ft_putchar(a + '0');
                ft_putchar(b + '0');
                ft_putchar(c + '0');

                if (a != 7)
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                c++;
            }
            b++;
        }
        a++;
    }
}
