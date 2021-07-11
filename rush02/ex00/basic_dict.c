#include <unistd.h>

void	find_key(char	*nb);
int		ft_pow(int	base, int	exp);
char	*ft_itoa(int nb);

void	print_number(unsigned int	contador, unsigned	int	number)
{
	int	nb;

	nb = (number / ft_pow(10, contador - 1)) % 10;
	if (nb != 0)
	{
		if (contador % 3 == 2)
		{
			if (nb == 1)
			{
				nb = (number / ft_pow(10, contador - 2)) % 100;
				find_key(ft_itoa(nb));
			}
			else
				find_key(ft_itoa(nb * 10));
		}
		else
		{
			find_key(ft_itoa(nb));
			if (contador != 1)
				find_key(ft_itoa(ft_pow(10, contador - 1)));
		}
	}
}

void	basic_dict(unsigned int	number)
{
	unsigned int	nb;
	unsigned int	contador;

	nb = number;
	contador = 0;
	if (number == 0)
		write(1, "0\n", 2);
	else
	{
		while (nb > 0)
		{
			nb /= 10;
			contador ++;
		}	
		while (contador > 0)
		{
			print_number(contador, number);
			contador--;
		}
	}
}

int	ft_pow(int base, int power)
{
	int		i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = base;
	while (power > 1)
	{
		base *= i;
		power--;
	}
	return (base);
}
