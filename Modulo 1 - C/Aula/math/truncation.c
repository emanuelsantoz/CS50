#include <cs50.h>
#include <stdio.h>

int main(void){
    int x = get_int("Informe o valor x: ");
    int y = get_int("Informe o valor y: ");
    
    float z = (double) x / (double) y;
    
    printf("O resultado da divisão sera: %f", z);
}