#include <stdio.h>
#include <cs50.h>
#include <math.h>

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
}
