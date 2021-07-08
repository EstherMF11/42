/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:45:08 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/08 16:27:38 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main () 
{
	char 	src[50];
	char	dest[50];
	char 	src1[50];
	char	dest1[50];
	unsigned int	a;
	unsigned int	b;

	strcpy(src,  "This is destination");
	strcpy(dest, "This is destination");
	strcpy(src1,  "This is source");
	strcpy(dest1, "This is destination");

	a = strlcat(dest, src,5);
	printf("Final destination string : |%s|, %u\n", dest, a);

	b = ft_strlcat(dest1, src1,5);
	printf("Final destination string : |%s|, %u\n", dest1, b);
   
   return(0);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	int				i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	n = 0;
	while (src[n] && n <= (size - 1))
	{
		if (dest[i] == src[n])
			dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (i);
}
