#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    // solicita altura entre 1 e 8
    do
    {
        height = get_int("Altura: ");
    }
    while (height < 1 || height > 8);

    //constrói a pirâmide
    for (int i = 0; i < height; i++)
    {
        //espaços à esquerda
        for (int s = 0; s < height - i - 1; s++)
        {
            printf(" ");
        }

        //primeira escada
        for (int h = 0; h < i + 1; h++)
        {
            printf("#");
        }

        //espaço no meio
        printf(" ");

        //segunda escada
        for (int h = 0; h < i + 1; h++)
        {
            printf("#");
        }

        //quebra de linha
        printf("\n");
    }
    return 0;
}
