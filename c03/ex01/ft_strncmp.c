/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:45:35 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/08 16:27:48 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strncmp(): compares two strings character by character and compares at most
			  the first n bytes of str1 and str2.*/

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main () 
{
	char str1[15];
	char str2[15];
	int ret;

	printf("Real Function\n");
	strcpy(str1, "abcdef");
	strcpy(str2, "Aa");

	ret = strncmp(str1, str2, 4);

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
	printf("-------------\n");
	printf("Own Function\n");
	strcpy(str1, "aaaaa");
	strcpy(str2, "aaaaaaaaa");

	ret = ft_strncmp(str1, str2, 4);

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
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && (i < (n - 1)))
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
