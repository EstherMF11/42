/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:49:23 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/08 12:04:15 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*PARA COMPILAR DIRECTAMENTE EL ARCHIVO Y COMPROBAR SI ESTÁ CORRECTO*/
/* PUEDES QUITAR LOS COMENTARIOS DE LAS SIGUIENTES LÍNEAS*/

/*#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "123UnpasitoPalanteMaria123";
	char	str3[] = "";

	ft_strupcase(str1);
	printf("Result: %s - Expected: HELLO\n", str1);
	ft_strupcase(str2);
	printf("Result: %s - Expected: 123UNPASITOPALANTEMARIA123\n", str2);
	ft_strupcase(str3);
	printf("Result: %s - Expected: \n", str3);
	return (0);
}*/

char	*ft_strupcase(char *str)
{
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
