/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:45:04 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/12 06:33:56 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strstr(): function locates the first occurrence of the null-terminate*/

/*#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main () 
{
	const char str[] = "Hello World!";
	const char to_find[] = "World";
	char *ret;

	ret = ft_strstr(str, to_find);
	printf("Own function: \n");
	printf("The substring is: %s\n", ret);

	return(0);
}*/

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
		if (str[i + j] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (to_find[j] == '\0')
					return (&str[i]);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
