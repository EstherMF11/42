/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:37:07 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/08 12:19:42 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*PARA COMPILAR DIRECTAMENTE EL ARCHIVO Y COMPROBAR SI ESTÁ CORRECTO*/
/* PUEDES QUITAR LOS COMENTARIOS DE LAS SIGUIENTES LÍNEAS*/

/*#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "salut, comment tu vas? 42mots qarante-deux; cinquuante+et+un";

	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}*/

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i - 1] < 'a' || str[i - 1] > 'z')
			&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
			&& (str[i - 1] < '0' || str[i - 1] > '9'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		++i;
	}
	return (str);
}
