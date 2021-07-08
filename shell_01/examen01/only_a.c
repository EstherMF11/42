#include <unistd.h>

void	only_a(char a);

int	main(void)
{
	char	a;

	a = 'e';
	only_a(a);
	return (0);
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	only_a(char a)
{
	a = 'a';
	ft_putchar(a);
}
