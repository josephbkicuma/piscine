/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:42:31 by jquicuma          #+#    #+#             */
/*   Updated: 2024/05/14 14:42:32 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void    ft_print_reverse_alphabet(void)
{
    char    c;

    c = 'z';
    while (c >= 'a')
    {
        ft_putchar(c--);
    }
}
