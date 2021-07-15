#include "structure.c"
#include "header.h"

int	main(int	argc, char **argv)
{
	if (argc < 2) //mínimo dos argumentos
		write(1, "Reading Erorr\n", 13);
	else
	{
		open_file(argv);
	}
	return (0);
}
