/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 09:37:02 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/02 10:06:48 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*PARA COMPILAR DIRECTAMENTE EL ARCHIVO Y COMPROBAR SI ESTÁ CORRECTO*/
/* PUEDES QUITAR LOS COMENTARIOS DE LAS SIGUIENTES LÍNEAS*/

#include <stdio.h>
#include <unistd.h>

/*void	ft_putchar(char c);

int	main(void)
{
	char	a;

	a = 'd';
	ft_putchar(a);
	return (0);
}
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
