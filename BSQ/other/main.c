#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	open_file(char *str[]);

int	main(int	argc, char **argv)
{
	if (argc < 2) //mínimo dos argumentos
		write(1, "Reading Erorr\n", 6);
	else
	{
		open_file(argv);
	}
	return (0);
}
