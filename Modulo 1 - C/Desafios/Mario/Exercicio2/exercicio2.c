#include <stdio.h>
#include <cs50.h>

int testNumeroUsuario(void);

int main(void){
    int numUsuarioTamanho;
    char feito = 'n';
    
    // Entrada
    numUsuarioTamanho = testNumeroUsuario();
    
    for(int colAltura = 1; colAltura <= numUsuarioTamanho;colAltura++){
        for(int colTamanho = 0; colTamanho < colAltura; colTamanho++){
            
            do{
                int contEspaco = numUsuarioTamanho - colAltura;
                int contWhile = colTamanho;
                
                while(contEspaco > contWhile && feito == 'n'){
                    printf(" ");
                    contWhile++;
                }
                feito = 's';
            }while(feito == 'n');
            printf("#"); 
        }
        
        for(int segundaP =0; segundaP < colAltura; segundaP++){
                
                if(segundaP == 0){
                    printf(" ");
                }
                printf("#"); 
                
        }
        
        printf("\n");
        feito = 'n';
        
    }
}

int testNumeroUsuario(void){
    
    int n;
    do{
        n = get_int("Por favor, Escreva o valor da pirâmide de 1 até 8: ");
    }while(n < 1 || n > 9);
    
    return n;
}