/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:43:26 by emoliner          #+#    #+#             */
/*   Updated: 2021/06/27 17:02:33 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		xtc;
	int		ytc;

	xtc = 0;
	ytc = 0;
	while (ytc++ < y)
	{
		while (xtc++ < x)
		{
			if ((ytc == 1 || ytc == y) && xtc == 1)
				ft_putchar('o');
			else if ((ytc == 1 || ytc == y) && xtc == x)
				ft_putchar('o');
			else if (xtc == 1 || xtc == x)
				ft_putchar('|');
			else if (ytc == 1 || ytc == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			if (xtc == x)
				ft_putchar('\n');
		}
		xtc = 0;
	}
}
