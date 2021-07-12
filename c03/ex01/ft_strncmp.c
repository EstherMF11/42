/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:45:35 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/12 06:34:07 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strncmp(): compares two strings character by character and compares at most
			  the first n bytes of str1 and str2.*/

/*#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main () 
{
	char str1[] = "aaaaa";
	char str2[] = "";
	int ret;

	ret = ft_strncmp(str1, str2, 2);
	printf("s1 - s2 = %d\n", ret);
	if(ret < 0)
	{
		printf("str1 is less than str2\n");
	} 
	else if(ret > 0)
	{
		printf("str2 is less than str1\n");
	} 
	else
	{
		printf("str1 is equal to str2\n");
	}

	return(0);
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] && s2[i]) && (n - 1))
	{
		if (s1[i] != s2[i])
			break ;
		i++;
		n--;
	}
	return ((unsigned char)(s1[i]) - (unsigned char)s2[i]);
}
