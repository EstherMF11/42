/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:45:04 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/13 10:32:24 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strstr(): function locates the first occurrence of the null-terminate*/

/*#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

#include <stdio.h>
#include <string.h>
int main()
{
	char n2[] = "Text to search in.";
	char n1[] = "rch";
	char msrc[10];
	char mdest[50];
	char src[10];
	char dest[50];
	char *mres, *res;

	strcpy(msrc, n1);
	strcpy(mdest, n2);
	strcpy(src, n1);
	strcpy(dest, n2);
	printf("--ORIGINAL FUNC--\nstr: '%s'\nto_find: '%s'\n\n", mdest, msrc);
	mres = strstr(mdest, msrc);
	printf("found: '%s'\n\n", mres);
	printf("--REPLICATE FUNC--\nstr: '%s'\nto_find: '%s'\n\n", dest, src);
	res = ft_strstr(dest, src);
	printf("found: '%s'\n\n", res);
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
