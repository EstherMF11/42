#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int nr_row(char *buf)
{
	int row;
	int a;

	a = buf[0]; //57 valor de 9 en ascii
	row = a - 48; //pasar de ascii a dec
	return (row);
}

int nr_col(char *buf)
{
	int	col;

	col = 0;
	while (buf[col + 5] != '\n') // col + 5 porque la primera linea te¡iene 5 char
	{
		col++;
	}
	return (col);
}

char	get_emptier(char *buf)
{
	char emptier;

	emptier = buf[1];
	return (emptier);
}

char	get_blocker(char *buf)
{
	char blocker;

	blocker = buf[2];
	return (blocker);
}

char	get_filler(char *buf)
{
	char filler;

	filler = buf[3];
	return (filler);
}
