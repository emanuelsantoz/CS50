#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);
const int TOTAL = 3;

int main(void)
{
    int scores[TOTAL];

    for (int i = 0; i <= TOTAL-1; i++)
    {
        scores[i] = get_int("Your score, please: ");
    }


    printf("Average: %f\n", average(TOTAL, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i< length-1; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}
