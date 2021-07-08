#include <stdio.h>

int	main(void)
{
	int		a;
	int		b;
	char	c;
	int		*ptr;
	char	*ptr2;

	ptr = &a;
	printf("%p - Direccion de a\n", ptr);
	ptr = &b;
	printf("%p - Direccion de b\n", ptr);
	ptr2 = &c;
	printf("%p - Direccion de c", ptr2);
}

/**
 * Declaramos una variable (int a)
 * Declaramos un puntero para poder recuperar esta dirección.
 * El compilador necesita saber el tipo variable qe va a esa dirección.
 * int a -> puntero asociado a un int
 * *ptr -> puntero
 * ptr = &a -> Recupera la dirección de la variabe a, haz una copia y metela en ptr
 * Los punteros son incompatibles entre variables diferentes (int vs char)
 */