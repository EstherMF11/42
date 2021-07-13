#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/*Extraemos el numeo de filas: Nos lo dan siempre en el "example_file"*/
int nr_row(char *buf)
{
	int row;
	int a;

	a = buf[0]; //57 valor de 9 en ascii
	row = a - 48; //pasar de ascii a dec
	return (row);
}

/*Extraemos el numeo de columnas: Contamos los caracteres hasta que haya un salto de línea.
Empezamos en [col + 5] porque lo primero que nos dan son nºlineas char_vacio char_obstaculo char_relleno*/
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

/*Extraemos el caracter "vacio" que nos pongan en el example_file*/
char	get_emptier(char *buf)
{
	char emptier;

	emptier = buf[1];
	return (emptier);
}

/*Extraemos el caracter "obstaculo" que nos pongan en el example_file*/
char	get_blocker(char *buf)
{
	char blocker;

	blocker = buf[2];
	return (blocker);
}

/*Extraemos el caracter "relleno" que nos pongan en el example_file*/
char	get_filler(char *buf)
{
	char filler;

	filler = buf[3];
	return (filler);
}
