#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = -1;
	while (argv[i++])
	{
		j = -1;
		while (argv[i][j++])
		{
			write(1, &argv[i][j], 1);
		}
	}
	return (0);
}