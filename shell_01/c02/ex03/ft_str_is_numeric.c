/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:04:29 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/08 11:50:44 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*PARA COMPILAR DIRECTAMENTE EL ARCHIVO Y COMPROBAR SI ESTÁ CORRECTO*/
/* PUEDES QUITAR LOS COMENTARIOS DE LAS SIGUIENTES LÍNEAS*/

/*#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str1[] = "123421";
	char	str2[] = "123 421";
	char	str3[] = "123abe421";
	char	str4[] = "";
	int	r;

	r = ft_str_is_numeric(str1);
	printf("%d - Expected : 1 (just numbers))\n", r);
	r = ft_str_is_numeric(str2);
	printf("%d - Expected : 0 (numbers and space)\n", r);
	r = ft_str_is_numeric(str3);
	printf("%d - Expected : 0 (numbers and characters)\n", r);
	r = ft_str_is_numeric(str4);
	printf("%d - Expected : 1 (null)\n", r);
	return (0);
}*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
