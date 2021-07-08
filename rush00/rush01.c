/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:35:23 by emoliner          #+#    #+#             */
/*   Updated: 2021/06/27 17:02:29 by emoliner         ###   ########.fr       */
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
			if ((xtc == 1 && ytc == 1) || (xtc == x && ytc == y))
				ft_putchar('/');
			else if ((xtc == 1 && ytc == y) || (xtc == x && ytc == 1))
				ft_putchar('\\');
			else if (xtc == 1 || xtc == x)
				ft_putchar('*');
			else if (ytc == 1 || ytc == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			if (xtc == x)
				ft_putchar('\n');
		}
		xtc = 0;
	}	
}
