/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:51:04 by emoliner          #+#    #+#             */
/*   Updated: 2021/06/27 17:02:17 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	xtc;
	int	ytc;

	xtc = 0;
	ytc = 0;
	while (ytc++ < y)
	{
		while (xtc++ < x)
		{
			if ((ytc == 1 && xtc == 1) || (ytc == y && xtc == x))
				ft_putchar('A');
			else if ((ytc == 1 && xtc == x) || (ytc == y && xtc == 1))
				ft_putchar('C');
			else if (ytc == 1 || ytc == y || xtc == 1 || xtc == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			if (xtc == x)
				ft_putchar('\n');
		}
		xtc = 0;
	}
}
