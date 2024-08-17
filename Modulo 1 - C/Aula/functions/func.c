#include <stdio.h>
#include <cs50.h>

int get_positivo_int(void);

int main(void){
    
    int i = get_positivo_int();
    printf("%i", i);
}

int get_positivo_int(void){
    int n;
    do{
        n = get_int("Informe um número posítivo e inteiro: ");
    } while(n < 1);
    
    return n;
}
