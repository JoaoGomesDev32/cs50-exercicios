#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float dollars;
    // pede um valor positivo
    do
    {
        dollars = get_float("Troco devido: ");
    }
    while (dollars < 0);

    // converte para centavos(arredonda para evitar erros)
    int cents = round(dollars * 100);

    int coins = 0;

    // conta quantas moedas de 25 cabem
    coins += cents / 25;
    cents %= 25;

    // conta quantas moedas de 10 cabem
    coins += cents / 10;
    cents %= 10;

    // conta quantas moedas de 5 cabem
    coins += cents / 5;
    cents %= 5;

    // conta quantas moedas de 1 cabem
    coins += cents / 1;
    cents %= 1;

    // resultado final
    printf("%i\n", coins);

    return 0;
}
