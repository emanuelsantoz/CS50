#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Declarando a key
    int key = 0;

    // Pegando a key
    if (argc == 2)
    {
        string response_cmd = argv[1];
        int converson = atoi(response_cmd);
        printf("%i", converson);
        if (isdigit(converson))
        {
                printf("%i\n", converson);
        }
        else
        {
            return printf("./caesar key\n");
        }
    }
}
