#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

double average(int number, int words);
float coleman_liau(double L, double S);

int main(void)
{
    // Input | pedir um texto para o usuario
    string text = get_string("Text: ");

    // Variaveis para a formula
    int totalLetter = 0;
    int totalPalavra = 1;
    int totalFrase = 0;

    // Calculo da frase
    for (int i = 0, totalthing = strlen(text); i < totalthing; i++)
    {
        if (isalpha(text[i]))
        {
            totalLetter++;
        }
        else if(text[i] == ' ')
        {
            totalPalavra++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            totalFrase++;
        }
    }

    // Calculo | Medio a cada 100 por letra e sentaça L e S
    float l = average(totalLetter, totalPalavra);
    float s = average(totalFrase, totalPalavra);

    // Calculo final | Formula Coleman-Liau
    int formula = round(coleman_liau(l, s));

    // Saída | Resultado da fomra
    if (formula < 2)
    {
        printf("Grand Before 1\n");
    }
    else if (formula > 16)
    {
        printf("Grand  16+\n");
    }
    else
    {
        printf("Grand %d\n", (formula));
    }
}

double average(int number, int words)
{
    double indexAverage = ((double) number / words) * 100;
    return indexAverage;
}

float coleman_liau(double L, double S)
{
    // printf("L: %f | S: %f\n", L, S);
    float index = (0.0588 * L) - (0.296 * S) - 15.8;

    // printf("Index: %f\n", round(index));
    return index;
}
