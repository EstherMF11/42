#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	row;
	int	col;
	int	*cordx;
	int *cordy;
	int **matrix;

	row = 9;
	col = 27;
	cordx = &cordx[row];
	cordy = &cordy[col];
	matrix = matrix[row][col];

	return (0);
}

