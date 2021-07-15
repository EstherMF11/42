/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoliner <emoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 09:32:37 by emoliner          #+#    #+#             */
/*   Updated: 2021/07/05 08:52:07 by emoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*PARA COMPILAR DIRECTAMENTE EL ARCHIVO Y COMPROBAR SI ESTÁ CORRECTO*/
/* PUEDES QUITAR LOS COMENTARIOS DE LAS SIGUIENTES LÍNEAS*/

/*#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	putarr(int arr[], int size)
{
	int	i;
	for (i = 0; i < (size - 1); i++)
		printf("%d,", arr[i]);
	printf("%d\n", arr[size - 1]);
}

int	main(void)
{
	int	tab[] = {1, 9, 1, 3};
	int	size;

	size = 4;
	printf("Original: ");
	putarr(tab, size);
	ft_sort_int_tab(tab, size);
	printf("Modified: ");
	putarr(tab, size);
	return (0);
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	j = 0;
	while (j < (size - 1))
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		j++;
	}
}
