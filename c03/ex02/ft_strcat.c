/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:45:17 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/13 09:59:12 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strcat(): appends the string pointed to by src to the end of
			 the string pointed to by dest.*/

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main (void) 
{
	char 	src[50];
	char	dest[50];
	char 	src1[50];
	char	dest1[50];

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");
	strcpy(src1,  "This is source");
	strcpy(dest1, "This is destination");

	printf("Real Function:\n");
	strcat(dest, src);
	printf("Final destination string : |%s|\n", dest);
	printf("--------------\n");
	printf("Own Function:\n");
	ft_strcat(dest1, src1);
	printf("Final destination string : |%s|\n", dest1);

	return(0);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
		i++;
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
