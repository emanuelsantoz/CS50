#include <stdio.h>
#include <cs50.h>

int validadorNumeroUsuario(void);

int main(void){
    
    // Validando o Numero do usuário
   int numUsuario = validadorNumeroUsuario();
    
    // Processamento
    int doCont=0;
    
    
    for(int cA = 1; cA <= numUsuario; cA++){
        for(int cH = 0; cH < cA; cH++){
            
            
            int cal = numUsuario - cA; 
            int c = cH;
            
            
            do{
                while(cal > c && doCont == 0){
                    printf(" ");
                    c++;    
                }
                doCont = 1;
            }while(doCont == 0);
            printf("#");
        } 
        doCont = 0;
        printf("\n"); 
    }
}

int validadorNumeroUsuario(void){
    // Teste o número que o usuario informou! Se numUsuario > 1 || numUsuario <= 8 = true
    int numUsuario;
     do{
        numUsuario = get_int("Informe a altura da primede de 1 até 8: "); 
    }while(numUsuario < 1 || numUsuario > 9);
    
    return numUsuario;
}