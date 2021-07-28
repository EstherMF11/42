#include <unistd.h>


void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb > 9)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + 48);
}

int main(void)
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (i % 4 == 0 && i % 7 == 0)
            write(1, "BuzzFizz\n", 9);
        else if (i % 7 == 0)
            write(1, "Fizz\n", 5);
        else if (i % 4 == 0)
            write(1, "Buzz\n", 5);
        else
        {
            ft_putnbr(i);
            write(1 , "\n", 1);
        }
        i++;
    }
    return (0);
}