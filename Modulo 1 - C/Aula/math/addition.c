#include <cs50.h>
#include <stdio.h>

int main(void){
    int year = get_int("Qual a sua idade? ");
    
    int mom = get_int("Qual é a idade da sua mãe? ");
    
    printf("A sua idade e a da sua mãe é: %i\n", year+mom);
    
}