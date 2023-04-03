#include <stdio.h> 
    int main() {
        int numero1, numero2;
        printf("Digite dois numeros: ");
        scanf("%d, %d", &numero1, &numero2);

        if(numero1 < numero2) {
            printf("O maior dos dois numeros e o numero %d", numero2);
        }
        else{
            printf("O maior dos dois numeros e o numero %d", numero1);
        }

        return 0;
    }