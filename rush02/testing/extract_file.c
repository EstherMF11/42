#include <stdio.h>
#include <fcntl.h>


int	main()
{
	char	aux;
	int	f;

	f = open("./Ejemplo.txt", O_RDONLY);
	if (f == -1)
	{
		printf("Error\n");
	}
	while (aux != EOF)
	{
		aux = fgetc(f);
		printf("%c", aux);
	}
	printf("\n");
	close(f);
}