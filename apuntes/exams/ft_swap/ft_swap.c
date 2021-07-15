/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 08:24:45 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/09 08:24:45 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void ft_swap(int *a, int *b);

int		main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 15;
	ft_swap(&a, &b);
	printf("a = %d, b = %d", a, b);
}*/

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
