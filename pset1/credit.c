#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number;

    // Pede o número do cartão
    do
    {
        number = get_long("Número do cartão: ");
    }
    while (number < 0);

    long temp = number;
    int sum = 0;
    int position = 0;

    // Aplica o algoritmo de Luhn
    while (temp > 0)
    {
        int digit = temp % 10;

        // Se for posição par (contando da direita), soma direto
        if (position % 2 == 0)
        {
            sum += digit;
        }
        else
        {
            int doubled = digit * 2;
            sum += (doubled / 10) + (doubled % 10);
        }

        temp /= 10;
        position++;
    }

    // Verifica se passou no Luhn
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // Conta dígitos e descobre prefixo
    int length = 0;
    long prefix = number;
    while (prefix >= 100) // mantemos só os dois primeiros dígitos
    {
        prefix /= 10;
        length++;
    }
    length += 2; // corrigindo a contagem

    // Identificação da bandeira
    if (length == 15 && (prefix == 34 || prefix == 37))
    {
        printf("AMEX\n");
    }
    else if (length == 16 && (prefix >= 51 && prefix <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((length == 13 || length == 16) && (prefix / 10 == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
