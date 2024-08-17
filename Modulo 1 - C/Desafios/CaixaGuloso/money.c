#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    float numUsuario;
    int centavos;
    int totalMoedas =0;
    do{
        numUsuario = get_float("Quanto de troco R$: ");
        
    } while(numUsuario < 0);
    
    centavos = round(numUsuario * 100);

    while(centavos > 0){
        if(centavos >= 25){ 
            centavos =- 25;
            totalMoedas++;
        }  else if(centavos >= 10){
            centavos =- 10;
            totalMoedas++;
        }   else if(centavos >= 5){
            centavos =- 5;
            totalMoedas++;
        } else {
            centavos =- 1;
            totalMoedas++;
        }
    }
    printf("Total de Moedas: %i\n", totalMoedas);
}