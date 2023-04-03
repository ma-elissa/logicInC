#include <stdio.h>
    int main() {
        int numero;
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero == 3) {
            printf("Voce digitou o numero correto!");
        }
        else {
            printf("Voce digitou o numero errado ");

        }
    
        return 0;
    }