/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:12:59 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/08 12:02:38 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*PARA COMPILAR DIRECTAMENTE EL ARCHIVO Y COMPROBAR SI ESTÁ CORRECTO*/
/* PUEDES QUITAR LOS COMENTARIOS DE LAS SIGUIENTES LÍNEAS*/

/*#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str1[] = "HELLOWORLD";
	char	str2[] = "HelloWorld";
	char	str3[] = "123ABE421";
	char	str4[] = "";
	int	r;

	r = ft_str_is_uppercase(str1);
	printf("%d - Expected : 1 (just upper case characters)\n", r);
	r = ft_str_is_uppercase(str2);
	printf("%d - Expected : 0 (low and upper case character)\n", r);
	r = ft_str_is_uppercase(str3);
	printf("%d - Expected : 0 (characters and numbers)\n", r);
	r = ft_str_is_uppercase(str4);
	printf("%d - Expected : 1 (null)\n", r);
	return (0);
}*/

int	ft_str_is_uppercase(char *str)
{
	int		a;
	char	b;

	a = 0;
	while (str[a] != '\0')
	{	
		b = str[a];
		if (b < 'A' || b > 'Z')
		{
			return (0);
		}
		a++;
	}
	return (1);
}
