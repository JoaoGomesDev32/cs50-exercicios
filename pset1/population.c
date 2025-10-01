#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Solicite o valor inicial ao usuário
    int initialSize;
    do
    {
        initialSize = get_int("Digite o tamanho inicial da população: ");
    }
    while (initialSize < 9);

    // TODO: Solicite o valor final ao usuário
    int finalSize;
    do
    {
        finalSize = get_int("Digite o tamanho final da população: ");
    }
    while (finalSize < initialSize);

    // TODO: Calcule o número de anos até o limite
    int yearsToGoal = 0;

    int population = initialSize;
    while (population < finalSize)
    {
        population = population + (population / 3) - (population / 4);
        yearsToGoal++;
    }

    // TODO: Imprima o número de anos
    printf("Anos: %i\n", yearsToGoal);
}
