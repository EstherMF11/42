#include<stdio.h>
#include<unistd.h>
​
int         ft_iterative_power(int nb, int power)
{
	int		i;
​
	if (power < 0)
		return (0);
	if (power == 0)
		return (0);
	i = nb;
	while (power > 1)
	{
		nb *= i;
		power--;
	}
    write(1 &nb, sizeof(nb));
	return (0);
}
​
int main(void)
{
    ft_iterative_power(5,2);
}
