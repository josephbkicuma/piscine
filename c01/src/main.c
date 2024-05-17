/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:37:53 by jquicuma          #+#    #+#             */
/*   Updated: 2024/05/15 12:37:55 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include <stdio.h>

int main(void)
{
    int teste[] = {1, 2};
    int size = 6;

    ft_sort_int_tab(teste, size);
    int n = 0;
    while (n < size)
    {
        printf("%d\n", teste[n++]);
    }
    
}
