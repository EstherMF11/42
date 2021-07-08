/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:49:49 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/05 07:55:38 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*PARA COMPILAR DIRECTAMENTE EL ARCHIVO Y COMPROBAR SI ESTÁ CORRECTO*/
/* PUEDES QUITAR LOS COMENTARIOS DE LAS SIGUIENTES LÍNEAS*/

#include <stdio.h>

/*void	ft_ft(int *nbr);

int	main(void)
{
	int	ptr;

	ptr = 1;
	ft_ft(&ptr);
	printf("Valor: %d;\nDireccion puntero; %p", ptr, &ptr);
	return (0);
}*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
