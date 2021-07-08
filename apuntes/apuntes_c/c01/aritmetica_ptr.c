#include <stdio.h>

int main(void)
{
    int b;
    int a;
    int *ptr;

    b = 23;
    ptr = &a;
    printf("%p - Direccion\n", ptr);
    printf("%p\n", &b);
    printf("%p\n", ptr + 1);
    printf("%d\n", *(ptr + 1));
    return (0);
}

