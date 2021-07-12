/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:45:11 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/12 06:33:59 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strncat(): This function appends not more than n characters from 
			  the string pointed to by src to the end of the string pointed to 
			  by dest plus a terminating Null-character.*/

/*#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
   
	// Take any two strings
	char src[50] = "efghijkl";
	char dest[50]= "abcd";

	// Appends 5 character from src to dest
	printf("Real Function:\n");
	strncat(dest, src, 5);
	printf("Source string : %s\n", src);
	printf("Destination string : %s\n", dest);

	printf("------------\n");
	printf("OwnFunction:\n");
	ft_strncat(dest, src, 5);
	printf("Source string : %s\n", src);
	printf("Destination string : %s", dest);

	return 0;
}*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	int				i;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
		i++;
	while (src[a] && (a < nb))
	{
		dest[i] = src[a];
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
