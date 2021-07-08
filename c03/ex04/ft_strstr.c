/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:45:04 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/08 16:27:41 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strstr(): function locates the first occurrence of the null-terminate*/

#include <stdio.h>
#include <string.h>

int main () {
	const char haystack[20] = "TutorialsPoint";
	const char needle[10] = "tori";
	char *ret;

	ret = strstr(haystack, needle);
	printf("Real function: \n");
	printf("The substring is: %s\n", ret);
	printf("--------------------------------\n");

	ret = strstr(haystack, needle);
	printf("Own function: \n");
	printf("The substring is: %s\n", ret);

	return(0);
	}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			j++;
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
