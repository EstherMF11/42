/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:04:42 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/08 11:56:55 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*PARA COMPILAR DIRECTAMENTE EL ARCHIVO Y COMPROBAR SI ESTÁ CORRECTO*/
/* PUEDES QUITAR LOS COMENTARIOS DE LAS SIGUIENTES LÍNEAS*/

/*#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str1[] = "Hola";
	char	str2[] = "Ho la";
	char	str3[] = "123abe421";
	char	str4[] = "";
	int	r;

	r = ft_str_is_alpha(str1);
	printf("Result: %d - Expected : 1 (just letters)\n", r);
	r = ft_str_is_alpha(str2);
	printf("Result: %d - Expected : 0 (letters and space)\n", r);
	r = ft_str_is_alpha(str3);
	printf("Result: %d - Expected : 0 (letters and numbers)\n", r);
	r = ft_str_is_alpha(str4);
	printf("Result: %d - Expected : 1 (null)\n", r);
	return (0);
}*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || ((str[i] > 'Z') && (str[i] < 'a')) || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
