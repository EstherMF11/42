/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:06:42 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/08 12:01:46 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*PARA COMPILAR DIRECTAMENTE EL ARCHIVO Y COMPROBAR SI ESTÁ CORRECTO*/
/* PUEDES QUITAR LOS COMENTARIOS DE LAS SIGUIENTES LÍNEAS*/

/*#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str1[] = "helloworld";
	char	str2[] = "HelloWorld";
	char	str3[] = "123abe421";
	char	str4[] = "";
	int	r;

	r = ft_str_is_lowercase(str1);
	printf("Result: %d - Expected : 1 (just low case letters)\n", r);
	r = ft_str_is_lowercase(str2);
	printf("Result: %d - Expected : 0 (low and upper case letters)\n", r);
	r = ft_str_is_lowercase(str3);
	printf("Result: %d - Expected : 0 (letters and numbers)\n", r);
	r = ft_str_is_lowercase(str4);
	printf("Result: %d - Expected : 1 (null)\n", r);
	return (0);
}*/

int	ft_str_is_lowercase(char *str)
{
	int		a;

	a = 0;
	while (str[a])
	{
		if (str[a] < 'a' || str[a] > 'z')
		{
			return (0);
		}
		a++;
	}
	return (1);
}
