#include <stdio.h>

int	main(void)
{
	void	*ptr;
	int		*ptr_i;
	char	*ptr_c;

	ptr = ptr_c;
	ptr_i = ptr;
	return (0);
}

/**
 * ptr_i = ptr_c; Warning!! Ambas son una dirección. 
 * Necesitamos tener un conversor (ptr)
 */