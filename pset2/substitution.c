#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool validate_key(string key);

int main(int argc, string argv[])
{
    // Verifica se há exatamente 2 argumentos
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string key = argv[1];

    // Valida a chave
    if (!validate_key(key))
    {
        printf("Key must contain 26 unique alphabetic characters.\n");
        return 1;
    }

    // Pede o plaintext
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    // Percorre o plaintext
    for (int i = 0; i < strlen(plaintext); i++)
    {
        char c = plaintext[i];

        if (isupper(c))
        {
            int index = c - 'A';
            printf("%c", toupper(key[index]));
        }
        else if (islower(c))
        {
            int index = c - 'a';
            printf("%c", tolower(key[index]));
        }
        else
        {
            printf("%c", c);
        }
    }

    printf("\n");
    return 0;
}

// Função que valida a chave
bool validate_key(string key)
{
    // Deve ter 26 caracteres
    if (strlen(key) != 26)
    {
        return false;
    }

    // Array para marcar letras já vistas
    bool seen[26] = {false};

    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            return false; // todos os caracteres devem ser letras
        }

        int index = toupper(key[i]) - 'A';

        if (seen[index])
        {
            return false; // letra repetida
        }
        seen[index] = true;
    }

    return true;
}
