#include <cs50.h>
#include <stdio.h>

int main(void){
    char c = get_char("Você é cristão?");
    if(c == 'y' || c == 's'){
        printf("Vamos para o culto!");
    } else {
        printf("Vamos fazer uma visa!");
    }
}