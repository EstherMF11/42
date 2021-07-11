//Coger los datos de los trabajadores del fichero de texto y meterlo en una estructura
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char *nombre;
	int edad;
}trabajadores;

trabajadores *trab;

void vaciar(char temp[]);
void copiar(char temp[], int i);


int main()
{
	int	i;
	int	j;
	char	aux;
	int contador;
	char	temp[50];

	contador = 0;
	FILE *f; //f = nombre del fichero
	//Nombre del archivo y persmisos (read_only)
	f = fopen("Bloque8.2.txt", "r");
	if (f == NULL) //Comprobamos que se abre el fichero
	{
		printf("No se ha podido abrir el fichero");
		exit (1);
	}

	//reservar la memoria necesaria para nuestro vector dinámico de esctructuras
	while(!feof(f))
	{
		fgets(temp,50,f); //leer toda la linea. Lo almacena en un string
		contador++;
	}

	rewind(f); //poner al inicio del array el puntero

	trab = (trabajadores*)malloc(contador*sizeof(trabajadores));
	if (trab == NULL)
	{
		printf("No se ha podido reservar la memoria. \n");
		exit(1);
	}
	//Leemos la key y values
	i = 0;
	j = 0;
	aux = '0';
	while (!feof(f)) //Caundo lleguemos al final del fichero
	{
		vaciar(temp); //Leer el nombre uno a uno los caracteres del nombre y los metemos dentro del string
		while (aux != ':') //cada uno de los caracteres de nuestro fichero
		{
			aux = '0'; //Coge uno a uno los elementos del fichero
			if (aux != ':')
				temp[j] = aux;
			j++;
		}
		copiar(temp, i);
		fgets(temp, 4, f); //4 por 27'\n''\0'
		trab[i].edad = atoi(temp); //char a int
		i++;
	}

	printf("Nombre: %s Edad: %i\n", trab[i].nombre, trab[i].edad);


	system("pause");
	return (0);
}

void vaciar(char temp[])
{
	int i;

	i = 0;
	while(i < 50)
	{
		temp[i] = '\0';
		i++;
	}
}

void copiar(char temp[], int i)
{
	int	N;

	N = strlen(temp) + 1;
	trab[i].nombre = (char*)malloc(N*sizeof(char));
	if (trab[i].nombre == NULL)
	{
		printf("No se ha podido reservar memoria\n");
		exit(1);
	}
	strcpy(trab[i].nombre, temp);
}
