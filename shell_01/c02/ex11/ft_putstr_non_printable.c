/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:09:43 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/08 12:21:39 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Caracteres imprimiblles ascii desde el 32 hasta el 126*/

/*PARA COMPILAR DIRECTAMENTE EL ARCHIVO Y COMPROBAR SI ESTÁ CORRECTO*/
/* PUEDES QUITAR LOS COMENTARIOS DE LAS SIGUIENTES LÍNEAS*/

/*#include <unistd.h>
#include <stdio.h>


void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	str[] = "Coucou\ttu vas\n bien\v ?";

	ft_putstr_non_printable(str);
	return (0);
}*/

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		a;

	a = 0;
	while (str[a])
	{
		if (str[a] >= 32)
		{
			ft_putchar(str[a]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("012345679abcdef"[str[a] / 16]);
			ft_putchar("012345679abcdef"[str[a] % 16]);
		}
		a++;
	}
}
