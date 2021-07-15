#include <unistd.h>

void	ft_countdown(void)
{
	char	i;

	i = '9';
	while (i >= '0')
	{
		write(1, &i, 1);
		i--;
	}
}

int	main(void)
{
	ft_countdown();
}
