#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");

    int letters = 0;
    int words = 1;   // começa em 1 porque o número de palavras = nº de espaços + 1
    int sentences = 0;

    // percorre cada caractere do texto
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
        else if (text[i] == ' ')
        {
            words++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

    // calcula L e S
    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;

    // aplica a fórmula
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);

    // decide saída
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}
