#include <stdio.h>

int main(void)
{
    int tab[3];
    int *ptr;

    tab[0] = 478;
    tab[1] = 2;
    tab[2] = 157;
    printf("%p - Dirección del puntero\n", tab);
    printf("%d - Valor del primer elemento del tab\n", *tab);
    printf("%d - Valor del primer elemento del tab\n", *(tab + 1));
    printf("%d - Valor del primer elemento del tab\n", *(tab + 2));
    return (0);
}