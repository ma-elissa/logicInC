#include <stdio.h>
    int main(){
        float numero;
        printf("Digite um numero: ");
        scanf("%f", &numero);
        
        if(numero < 0){
            float moduloNegativo = numero * -1;
            printf("O modulo do numero %.2f e %.2f", numero, moduloNegativo);
        }
        else{
            printf("O modulo do numero %.2f e %.2f", numero, numero);
        }
    
        return 0;
    }