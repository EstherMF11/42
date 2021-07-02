/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:49:59 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/02 08:02:29 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 7;
	ft_swap(&a, &b);
	printf("a = %d, b= %d", a, b);
	return (0);
}
*/
void	ft_swap(int *a, int *b)
{
	int	z;

	z = *a;
	*a = *b;
	*b = z;
}
