/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:21:21 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/08 12:03:26 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Caracteres imprimiblles ascii desde el 32 hasta el 126*/

/*PARA COMPILAR DIRECTAMENTE EL ARCHIVO Y COMPROBAR SI ESTÁ CORRECTO*/
/* PUEDES QUITAR LOS COMENTARIOS DE LAS SIGUIENTES LÍNEAS*/

/*#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str1[] = "hello102%&/!";
	char	str2[] = "\n";
	char	str3[] = "hsuw\n";
	char	str4[] = "";
	int	r;

	r = ft_str_is_printable(str1);
	printf("Result: %d - Expected : 1 (just printable)\n", r);
	r = ft_str_is_printable(str2);
	printf("Result: %d - Expected : 0 (no printable)\n", r);
	r = ft_str_is_printable(str3);
	printf("Result: %d - Expected : 0 (mix)\n", r);
	r = ft_str_is_printable(str4);
	printf("Result: %d - Expected : 1 (null)\n", r);
	return (0);
}*/

int	ft_str_is_printable(char *str)
{
	int		a;

	a = 0;
	while (str[a])
	{	
		if (str[a] < 32 || str[a] > 126)
		{
			return (0);
		}
		a++;
	}
	return (1);
}
