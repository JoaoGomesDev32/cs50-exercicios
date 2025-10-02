#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string Jogador1 = get_string("Inserir palavara do jogador 1: ");
    string Jogador2 = get_string("Inserir palavara do jogador 2: ");

    if(Jogador1 > Jogador2)
    {
        printf("Jogador 1 Ganhou!");
    } else
    {
        printf("Jogador 2 Ganhou!");
    }
}
