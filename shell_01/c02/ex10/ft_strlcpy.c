/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:10:53 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/08 12:20:34 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strlcpy() and strlcat() functions copy and concatenate strings with
     the same input parameters and output result as snprintf(3).  They are
     designed to be safer, more consistent, and less error prone replacements
     for the easily misused functions strncpy(3) and strncat(3).*/

/*#include <stdio.h>
#include <strings.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
    char    s1[20] = "";
    char    s2[] = "Hello World A lot";
	char    s3[20] = "";
    char    s4[] = "Hello World A lot";

    printf("Using orignal strcmp function \n");
    printf("Result: %lu", strlcpy(s1, s2, 10));
    printf("\nUsing customized ft_strcmp function \n");
    printf("Result: %d", ft_strlcpy(s3, s4, 10));
}*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (src[c])
	{
		c++;
	}
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (c);
}
