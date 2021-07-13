/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:45:08 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/13 10:32:25 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char n1[] = "6789";
	char n2[] = "12345";
	char msrc[10];
	char mdest[50];
	char src[10];
	char dest[50];
	int r1, r2;

	strcpy(msrc, n1);
	strcpy(mdest, n2);
	strcpy(src, n1);
	strcpy(dest, n2);
	printf("--ORIGINAL FUNC--\nstr: '%s'\ndest: '%s'\n\n", msrc, mdest);
	r1 = strlcat(mdest, msrc, 10);
	printf("new str: '%s'\nnew dest: '%s'\nreturned: '%i'\n", msrc, mdest, r1);
	printf("--REPLICATE FUNC--\nstr: '%s'\ndest: '%s'\n\n", src, dest);
	r2 = ft_strlcat(dest, src, 10);
	printf("new str: '%s'\nnew dest: '%s'\nreturned: '%i'\n", src, dest, r2);
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
