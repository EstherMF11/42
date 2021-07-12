#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

/*Contador de numero de caracteres obstaculo que tenemos*/
int blockers_count(char *buf, char blocker, int row, int col)
{
	int c;
	int i;
	int dim;
	int counter_blocks;
	int c_b;

	c = 0;
	i = 0;
	dim = row * col + row + 5; //sumamos los saltos de linea + la primera fila
	while (i < dim)
	{
		if (buf[i] == blocker)
		{
			c++;
		}
		i++;
	}
	c_b = c - 1; //quitamos el de la primera linea
	printf("Blockers count: %d\n", c_b);
	return (c_b);
}


/*Printeamos la matriz utilizando el numero de col, row y caracteres que nos ponen en el example_file*/
void print_matrix(int col, int row, char emptier)
{
	int		xtc;
	int		ytc;

	xtc = 0;
	ytc = 0;
	while (xtc++ < row)
	{
		while (ytc++ < col)
		{
			ft_putchar(emptier);
		}
		ft_putchar('\n');
		ytc = 0;
	}
}

