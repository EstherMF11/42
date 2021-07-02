/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 07:38:01 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/02 07:53:48 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {1, 2, 9, 3};
	int	j;
	int	size;

	size = 4;
	ft_rev_int_tab(tab, size);
	for (j = 0; j < size; j++)
		printf("%d ", tab[j]);
	return (0);
}
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	size2;
	int	i;
	int	swap;

	i = 0;
	size2 = size - 1;
	while (i < size2)
	{
		swap = tab[i];
		tab[i] = tab[size2];
		tab[size2] = swap;
		i++;
		size2--;
	}
}
