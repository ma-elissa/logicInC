#include <stdio.h>
    int main() {
        int numero;
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero < 0) {
            printf("Esse e um numero negativo");
        }
        else if(numero == 0) {
            printf("Esse e um numero nulo");
        }
        else if(numero > 0) {
            printf("Esse e um numero positivo");
        }

        return 0;
    }