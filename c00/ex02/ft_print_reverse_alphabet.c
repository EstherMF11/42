/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 08:53:50 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/02 09:55:03 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*PARA COMPILAR DIRECTAMENTE EL ARCHIVO Y COMPROBAR SI ESTÁ CORRECTO*/
/* PUEDES QUITAR LOS COMENTARIOS DE LAS SIGUIENTES LÍNEAS*/

#include <stdio.h>
#include <unistd.h>

/*void	ft_print_reverse_alphabet(void);

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
void	ft_print_reverse_alphabet(void)
{
	char	rev_a;

	rev_a = 'z';
	while (rev_a >= 'a')
	{
		write(1, &rev_a, 1);
		rev_a--;
	}
}
