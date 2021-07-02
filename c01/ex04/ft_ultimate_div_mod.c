/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:50:09 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/02 08:00:22 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	c = 42;
	d = 7;
	a = c;
	b = d;
	ft_ultimate_div_mod(&a, &b);
	printf("%d / %d = %d, mod = %d", c, d, a, b);
}
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
