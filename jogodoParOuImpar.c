#include <stdio.h>
    int main() {
        printf("********************\n");
        printf("JOGO DO PAR OU IMPAR\n");
        printf("********************\n");
        printf("Se o seu numero for par, ele sera multiplicado por 7;\nSe o seu numero for impar, ele sera multiplicado por 9;\n\n");
        
        int numero;
        printf("Digite um numero: ");
        scanf("%d", &numero);

        int numeroPar = numero * 7;
        int numeroImpar = numero * 9;
        

        if(numero % 2 == 0) {
            printf("%d", numeroPar);
        }
        else{
           printf("%d", numeroImpar);
        }
        
        return 0;
    }