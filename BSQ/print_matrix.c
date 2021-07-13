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

/*void blocker_matrix(int col, int row, char *buf)
{
	int c;
	int i;
	int dim;
	char matrix[200][200];

	c = 0;
	i = 0;
	dim = row * col + row + 5; //sumamos los saltos de linea + la primera fila
	while (i < dim)
	{
		i = 5;
		if (buf[i] > i && buf[i] < buf[i + col])
		{
			if (buf[i] == blocker)
				
		}
		i++;
	}
}*/


/*Printeamos la matriz utilizando el numero de col, row y caracteres que nos ponen en el example_file*/
void print_matrix(int col, int row, char emptier)
{
	int		x_Count;
	int		y_Count;

	x_Count = 0;
	y_Count = 0;
	while (x_Count < row)
	{
		while (y_Count < col)
		{
			ft_putchar(emptier);
			y_Count++;
		}
		ft_putchar('\n');
		y_Count = 0;
		x_Count++;
	}
}

