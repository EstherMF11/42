/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 08:54:54 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/02 08:58:53 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void putarr(int arr[], int size)
{
	int	i;

	for (i = 0; i < (size - 1); i++)
		printf("%d,", arr[i]);
	printf("%d\n", arr[size - 1]);
}

int	main(void)
{
	int	tab[] = {1, 2, 9, 3};
	int	size;

	size = 4;
	printf("Original: ");
	putarr(tab, size);
	ft_sort_int_tab(tab, size);
	printf("Modified: ");
	putarr(tab, size);
	return (0);
}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
}
