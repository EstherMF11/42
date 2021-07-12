/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:45:08 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/12 06:33:52 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main () 
{
	char 	src1[] = "42 Madrid";
	char	dest1[] = "This is";
	unsigned int	a;
	unsigned int	b;

	a = ft_strlcat(dest1, src1,1);
	printf("Final destination string : |%s|, %u\n", dest1, a);
	b = strlcat(dest1, src1,1);
	printf("Final destination string : |%s|, %u\n", dest1, b);
	return(0);
}*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	total;

	i = 0;
	j = 0;
	total = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (i > size)
		total = size + j;
	if (i <= size)
		total = i + j;
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (total);
}
