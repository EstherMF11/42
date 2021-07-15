/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:50:47 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/02 10:04:42 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*PARA COMPILAR DIRECTAMENTE EL ARCHIVO Y COMPROBAR SI ESTÁ CORRECTO*/
/* PUEDES QUITAR LOS COMENTARIOS DE LAS SIGUIENTES LÍNEAS*/

#include <stdio.h>
#include <unistd.h>

/*void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
void	ft_putchar(char d)
{
	write(1, &d, 1);
}

char	to_one_digit(char n, int return_digits)
{
	char	d;

	if (return_digits == 1)
	{
		d = n / 10 + '0';
	}
	else
	{
		d = n % 10 + '0';
	}
	return (d);
}

void	ft_print_comb2(void)
{
	char	ab;
	char	cd;

	ab = -1;
	while (ab++ < 98)
	{
		cd = ab;
		while (cd++ < 99)
		{
			if (!(ab == 0 && cd == 1))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(to_one_digit(ab, 1));
			ft_putchar(to_one_digit(ab, 0));
			ft_putchar(' ');
			ft_putchar(to_one_digit(cd, 1));
			ft_putchar(to_one_digit(cd, 0));
		}
	}
}
