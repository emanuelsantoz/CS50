#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){

    string s = get_string("Input: ");
    printf("Output: ");

    for(int i=0, TOTALARRAY = strlen(s); i < TOTALARRAY; i++){
        printf("%c", s[i]);
    }
    printf("\n");
}


