/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:04:13 by jquicuma          #+#    #+#             */
/*   Updated: 2024/01/20 22:03:48 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y);

void	rush(int x, int y)
{
	int	_x;
	int	_y;

	_y = 0;
	while (_y < y)
	{
		_x = 0;
		while (_x < x)
		{
			if (_x == 0 && _y == 0)
				ft_putchar('o');
			else if (_y == 0 && _x == x - 1)
				ft_putchar('o');
			else if (_y == y - 1 && _x == 0)
				ft_putchar('o');
			else if (_y == y -1 && _x == x - 1)
				ft_putchar('o');
			else if (_x == 0 || _x == x - 1)
				ft_putchar('|');
			else if (_y == 0 || _y == y - 1)
				ft_putchar('-');
			else
				ft_putchar(' ');
			_x++;
		}
		ft_putchar('\n');
		_y++;
	}
}
