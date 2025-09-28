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
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
