#include <cs50.h>
#include <stdio.h>

int main(void){
    int idade = 1;
    while(idade < 100){
        printf("Você ainda é muito novo, sua idade é  %i",idade);
        idade++;
    }
}