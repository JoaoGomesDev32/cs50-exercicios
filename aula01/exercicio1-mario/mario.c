#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        n = get_int("Altura: ");
    }
    while (n < 1 || n > 8);

    for (int i = 0; i < height; i++)
    {
        //imprimir espaços vazios
        for (int s = 0; s < height - i - 1; s++)
        {
            printf(" ");
        }

        //imprimir os hashes
        for (int h = 0; h < height + i + 1; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}
