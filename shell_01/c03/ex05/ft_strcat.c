/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:45:08 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/07 13:45:44 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	int				i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	n = 0;
	while (src[n] != '\0' && n <= (size - 1))
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (i);
}
