#include <stdio.h>

/*void ft_pustr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		write(1, "\n", 1);
		i++;
	}
}*/

int ft_ascii(char *str)
{
	int	b;
	int	i;

	i = 0;
	while (str[i])
	{
		b = str[i];
		i++;
	}
	return (b);
}

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	i = 0;
	while (argv[i] && argc > (i + 1))
	{
		a = ft_ascii((argv[argc - 1 - i]));
		printf("%d\n", a);
		i++;
	}
	return (0);
}
