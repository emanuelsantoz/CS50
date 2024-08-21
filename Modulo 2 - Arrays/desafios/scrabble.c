#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Complete a função score

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);
int calculo_ponits(int points, int pointsAtual);

int main(void)
{
    // Solicitar ao usuário duas palavras
    // Calcular os pontos de cada palavra
    int userOnePointsTotal = compute_score(get_string("Por favor digite uma palavra, player 1: "));
    int userTwoPointsTotal =
        compute_score(get_string("\nPor favor digite uma palavra, player 2: "));

    // Imprimir o vencedor
    if (userOnePointsTotal < userTwoPointsTotal)
    {
        printf("Win Player 2, com %i pontos\n", userTwoPointsTotal);
    }
    else
    {
        printf("Win Player 1, com %i pontos\n", userOnePointsTotal);
    }
}

int compute_score(string word)
{
    int pontoLetter = 0;
    int pontoLetterTotal = 0;
    // Computa e devolve os pontos de cada palavra
    for (int i = 0, tamanhoTotal = strlen(word); i < tamanhoTotal; i++)
    {
        // test the type
        if (!isdigit(word[i]))
        {
            int transformaWordToNumber = toupper(word[i]);
            int indexWordNumber = transformaWordToNumber - 64;
            pontoLetter = POINTS[indexWordNumber - 1];

            pontoLetterTotal += pontoLetter;
        }else {
            printf("This is not a word!\n");
        }
    }
    printf("Pontoação final: %i\n", pontoLetterTotal);
    return pontoLetterTotal;
}

int calculo_ponits(int points, int pointsAtual)
{
    pointsAtual += points;

    return pointsAtual;
}
