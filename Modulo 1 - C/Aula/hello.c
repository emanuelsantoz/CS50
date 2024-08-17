#include <cs50.h>
#include <stdio.h>

int main(void){
    string answer = get_string("Qual é o seu nome? ");
    printf("Hello %s\n", answer);
    
    int number = 1;
    while(number < 100){
        printf("%i",number);
        number++;
    }
}