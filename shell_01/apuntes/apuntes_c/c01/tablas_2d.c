#include <stdio.h>

int main(void)
{
    int tab[3];
    int *tab2[2];

    tab[2] = 145;
    tab2[1] = tab;
    printf("%d\n", *(tab + 2));
    tab2[1][2] = 18;
    printf("%d\n", *(tab + 2));
    return (0);
}
