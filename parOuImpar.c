#include <stdio.h>
    int main() {
        int numero;
        printf("Digite o numero que voce gostaria de saber se par ou impar: ");
        scanf("%d", &numero);

        if(numero % 2 == 0) {
            printf("O numero %d e par ", numero);
        }
        else{
            printf("O numero %d e impar ", numero);
        }

        return 0;
    }