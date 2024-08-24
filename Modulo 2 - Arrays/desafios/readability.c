#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    // Input | pedir um texto para o usuario
    string text = get_string("Text: ");
    int totalLetter ;
    int totalPalavra ;
    int totalFrase;

    // Calculo | Numero medio a cada 100 por letra L


    // Calculo | numero medio a cada 100 sentaça S


    // Calculo | Formula Coleman-Liau

    // Saída | Resultado da fomra
    printf("Grand ", );
}

int totalThings(string word){

}


#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

double average(int number, int words);
int coleman_liau(double L, double S);

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
    double l = average(totalLetter, totalPalavra);
    double s = average(4, totalPalavra);

    // Calculo final | Formula Coleman-Liau
    int formula = coleman_liau(l, s);

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
        printf("Grand %i\n", (formula));
    }
}

double average(int number, int words)
{
    double indexAverage = ((double) number / words) * 100;
    return indexAverage;
}

int coleman_liau(double L, double S)
{
    printf("L: %f | S: %f\n", L, S);
    int index = (0.0588 * L) - (0.296 * S) - 15.8;

    printf("Index: %d\n", index);
    return index;
}
