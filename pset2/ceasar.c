#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Verifica se o programa recebeu exatamente 2 argumentos (./caesar key)
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Converte o argumento para inteiro
    int key = atoi(argv[1]);

    // Verifica se a chave é positiva
    if (key < 0)
    {
        printf("Key must be a positive integer.\n");
        return 1;
    }

    // Pede o texto original
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    // Percorre cada caractere
    for (int i = 0; i < strlen(plaintext); i++)
    {
        char c = plaintext[i];

        if (isupper(c))
        {
            // Fórmula para maiúsculas
            printf("%c", (c - 'A' + key) % 26 + 'A');
        }
        else if (islower(c))
        {
            // Fórmula para minúsculas
            printf("%c", (c - 'a' + key) % 26 + 'a');
        }
        else
        {
            // Outros caracteres não mudam
            printf("%c", c);
        }
    }

    printf("\n");
    return 0;
}
