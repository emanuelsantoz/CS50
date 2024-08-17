#include <stdio.h>
#include <cs50.h>

/*
    American Express = 34 ou 37
    MasterCard começa = 51, 52, 53, 54 ou 55
    Visa = 4
*/

int main(void){
    int numCartaoUsuario[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int valorDigito;
    
    int casoDoArray = 0;
    char pareDoWhile = 'a';

    int calcularAposUmaCasa=0;
    int calcularDaSobra=0;
    int totalContaTestCartao;
    
    int multipliquePorDois;
    long transformandoEmUnidadePrimeraUnidade;
    long transformandoEmUnidadeSegunda;
    
    string tipoDoCartão;
    
    do{
        valorDigito = get_int("Por favor dígite, dígito após ao digito: ");
        
        if(valorDigito > -1 && valorDigito  <= 9){
            numCartaoUsuario[casoDoArray] = valorDigito;
            casoDoArray++;
        } else {
            valorDigito = get_int("Por favor dígite, dígito após ao digito: ");
        }
        
        pareDoWhile = get_char("Deseja para?\nJá foram informados: %i\nDígite [p] para Parar! e [n] para continuar informandos os números do cartão: \n", casoDoArray);
    } while(pareDoWhile != 'p');
    
    
    for(int i=0; i< 16; i++){
        if(i % 2 != 0){
            printf("\nSegunda casa:  %i\n", numCartaoUsuario[i]);
            calcularDaSobra+= numCartaoUsuario[i];
            printf("\nCalculo dos números não multiplicados por 2:  %i\n", calcularDaSobra);
        }else {
            printf("Primeira casa: %i\n",numCartaoUsuario[i]); 
            multipliquePorDois = 0;
            multipliquePorDois = numCartaoUsuario[i]*2;
            
            if(multipliquePorDois < 9){
                printf("Multiplicado por 2: %i", multipliquePorDois);
                calcularAposUmaCasa += multipliquePorDois;
                printf("Soma dos Multplicados por 2: %i", calcularAposUmaCasa);
            // Adionar a soma 
            } else if(multipliquePorDois == 10)  { // Separa as unidades 10 = 1 0
                transformandoEmUnidadePrimeraUnidade = ((multipliquePorDois / 10) % 10);
                transformandoEmUnidadeSegunda = (multipliquePorDois / 100);
                printf("É MAIOR Q 10\n1º Digito: %ld 2º Digito: %ld\n", transformandoEmUnidadePrimeraUnidade,transformandoEmUnidadeSegunda);
                calcularAposUmaCasa += (transformandoEmUnidadePrimeraUnidade + transformandoEmUnidadeSegunda);
            } else if(multipliquePorDois == 12)  { // Separa as unidades 12 = 1 2
                transformandoEmUnidadePrimeraUnidade = ((multipliquePorDois / 10) % 10);
                transformandoEmUnidadeSegunda = (multipliquePorDois *2) / 10;
                printf("É MAIOR Q 10\n1º Digito: %ld 2º Digito: %ld\n", transformandoEmUnidadePrimeraUnidade,transformandoEmUnidadeSegunda);
                calcularAposUmaCasa += (transformandoEmUnidadePrimeraUnidade + transformandoEmUnidadeSegunda);
                printf("Soma dos Multplicados por 2: %i", calcularAposUmaCasa);
            } else if(multipliquePorDois == 14) { // Separa as unidades 14 = 1 4
                transformandoEmUnidadePrimeraUnidade = ((multipliquePorDois / 10) % 10);
                transformandoEmUnidadeSegunda = (multipliquePorDois * 3) / 10;
                printf("É MAIOR Q 10\n1º Digito: %ld 2º Digito: %ld\n", transformandoEmUnidadePrimeraUnidade,transformandoEmUnidadeSegunda);
                calcularAposUmaCasa += (transformandoEmUnidadePrimeraUnidade + transformandoEmUnidadeSegunda);
            } else if(multipliquePorDois == 16) { // Separa as unidades 16 = 1 6
                transformandoEmUnidadePrimeraUnidade = ((multipliquePorDois / 10) % 10);
                transformandoEmUnidadeSegunda = (multipliquePorDois * 4) / 10;
                printf("É MAIOR Q 10\n1º Digito: %ld 2º Digito: %ld\n", transformandoEmUnidadePrimeraUnidade,transformandoEmUnidadeSegunda);
                calcularAposUmaCasa += (transformandoEmUnidadePrimeraUnidade + transformandoEmUnidadeSegunda);
            } else { // Separa as unidades 18 = 1 8
                transformandoEmUnidadePrimeraUnidade = ((multipliquePorDois / 10) % 10);
                transformandoEmUnidadeSegunda = ((multipliquePorDois *5) / 10) -1 ;
                printf("É MAIOR Q 10\n1º Digito: %ld 2º Digito: %ld\n", transformandoEmUnidadePrimeraUnidade,transformandoEmUnidadeSegunda);
                calcularAposUmaCasa += (transformandoEmUnidadePrimeraUnidade + transformandoEmUnidadeSegunda);
            }
        }
    }
    printf("Soma dos Multplicados por 2: %i\n", calcularAposUmaCasa);
    printf("O total é: %i\n", calcularAposUmaCasa + calcularDaSobra);
    totalContaTestCartao =  calcularAposUmaCasa + calcularDaSobra;
    
    if(totalContaTestCartao % 10 != 0){
        printf("Os numeros informados são Invalidos!\n");
    } else {
        printf("Os numeros informados são Validos!\n");
        
            if(numCartaoUsuario[0] == 4){
               printf("O cartão é Visa\n");
            } else if(numCartaoUsuario[0] == 3){
                printf("O cartão é American Express\n");
            } else if(numCartaoUsuario[0] == 5 ){
                printf("O cartão é MasterCard\n");
            }
        }
}

