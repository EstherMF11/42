#include <unistd.h>

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[i] && argc > (i + 1))
	{
		ft_putstr(argv[argc - 1 - i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}