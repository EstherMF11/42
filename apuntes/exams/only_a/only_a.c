/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 07:18:55 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/09 07:19:55 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	only_a(void);

int 	main()
{
	only_a();
	return (0);
}*/

void	only_a(void)
{
	write(1, "a", 1);
}