/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:16:23 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/08 11:38:16 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STPCPY: The stpcpy() and strcpy() functions copy the string src to dst 
(including the terminating `\0' character.)*/

/*PARA COMPILAR DIRECTAMENTE EL ARCHIVO Y COMPROBAR SI ESTÁ CORRECTO*/
/* PUEDES QUITAR LOS COMENTARIOS DE LAS SIGUIENTES LÍNEAS*/

/*#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[] = "Go";
	char	src[] = "Hello";

	printf("src = %s --> dest = %s\n", src, dest);
	ft_strcpy(dest, src);
	printf("src = %s --> dest = %s", src, dest);
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
