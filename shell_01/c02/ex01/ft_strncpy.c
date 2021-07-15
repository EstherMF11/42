/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:22:40 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/08 11:40:31 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STPNCPY:  The stpncpy() and strncpy() functions copy at most len characters 
	from src into dst.  If src is less than len characters long, the remainder 
	of dst is filled with `\0' characters.  Otherwise, dst is not terminated.*/

/*PARA COMPILAR DIRECTAMENTE EL ARCHIVO Y COMPROBAR SI ESTÁ CORRECTO*/
/* PUEDES QUITAR LOS COMENTARIOS DE LAS SIGUIENTES LÍNEAS*/

/*#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main () {
	char src[40];
	char dest[12];
	char dest2[12];

	memset(dest, '\0', sizeof(dest));
	strcpy(src, "This is tutorialspoint.com");
	strncpy(dest, src, 10);
	printf("Final copied string : %s (n = 10)\n", dest);

	ft_strncpy(dest2, src, 10);
	printf("Final copied string : %s (n = 10)\n", dest2);
   
	return(0);
}*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
