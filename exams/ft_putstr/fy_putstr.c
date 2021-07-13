/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fy_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 08:24:59 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/09 08:24:59 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putstr(char *str);

int	main(void)
{
	ft_putstr("aasw");
	return (0);
}*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}