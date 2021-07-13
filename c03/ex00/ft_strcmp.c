/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 08:55:51 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/13 10:32:15 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strcmp(): compares two strings character by character. If the strings 
			 are equal, the function returns 0.*/

/*#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main() {
  char	str1[] = "abcd";
  char	str2[] = "abCd";
  char	str3[] = "abcd";
  int result;
  char	str4[] = "abcd";
  char	str5[] = "abCd";
  char	str6[] = "abcd";
  int result1;

	// Real function
	result = strcmp(str1, str2);
	printf("Real function:\n");
	printf("strcmp(abcd, abCd) = %d\n", result);

	result = strcmp(str1, str3);
	printf("strcmp(abcd, abcd) = %d\n", result);
	printf("-------------\n");
	// Own Function
	printf("Own function:\n");
	result1 = strcmp(str4, str5);
  	printf("strcmp(abcd, abCd) = %d\n", result1);

	result1 = ft_strcmp(str4, str6);
  	printf("strcmp(abcd, abcd) = %d\n", result1);

  return 0;
}*/

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
