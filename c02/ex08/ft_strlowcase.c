/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:26:04 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/08 12:04:57 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*PARA COMPILAR DIRECTAMENTE EL ARCHIVO Y COMPROBAR SI ESTÁ CORRECTO*/
/* PUEDES QUITAR LOS COMENTARIOS DE LAS SIGUIENTES LÍNEAS*/

/*#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str1[] = "HELLO";
	char	str2[] = "123UnPASITOPalanteMaria123";
	char	str3[] = "";

	ft_strlowcase(str1);
	printf("Result: %s - Expected: hello\n", str1);
	ft_strlowcase(str2);
	printf("Result: %s - Expected: 123unpasitopalantemaria123\n", str2);
	ft_strlowcase(str3);
	printf("Result: %s - Expected: \n", str3);
	return (0);
}*/

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] = str[a] + 32;
		}
		a++;
	}
	return (str);
}
