#include <stdio.h>
    int main() {
        int numero;
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero == 16) {
            printf("Voce digitou o numero correto!");
        }
        else if(numero > 16) {
            printf("Voce digitou um numero maior que o numero correto ");
        }
        else if(numero < 16) {
            printf("Voce digitou um numero menor que o numero correto ");
        }

        return 0;
    }