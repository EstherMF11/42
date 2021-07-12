#include <unistd.h>
/*#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	int	nb;

	nb = 3123;
	ft_putnbr(nb);
	return (0);
}*/

void	ft_putnbr(int nb)
{
	write(1, "42", 2);
}
