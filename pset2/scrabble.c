#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

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
