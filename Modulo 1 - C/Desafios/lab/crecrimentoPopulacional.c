#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    int valorInicio;
    int valorFim;
    int years=0;
    float novosAnimais=0;
    int mortosNaqueleAno=0; 
     // TODO: Solicite o valor inicial ao usuário
        do{
            valorInicio = get_int("Informe o tamanho inicial: ");
        } while(valorInicio <= 9 );
        
     // TODO: Solicite o valor final ao usuário
        do{
            valorFim = get_int("Informe o tamanho final: ");
        } while(valorFim <= valorInicio);

     // TODO: Calcule o número de anos até o limite
     
     while(valorInicio < valorFim){
        novosAnimais = valorInicio / 3;
        mortosNaqueleAno = valorInicio / 4;
        
        valorInicio+= (novosAnimais + mortosNaqueleAno);
        years++;     
     }
     
     // TODO: Imprima o número de anos
     printf("Anos: %i\n",years);
}