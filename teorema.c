#include <stdio.h>
    int main() {
        int dividendo, divisor, quociente, resto;
        printf("Digite um numero e seu divisor: ");
        scanf("%d %d", &dividendo, &divisor);
 
        quociente = dividendo / divisor;
        resto = dividendo % divisor;

        printf("O resultado da divisao e %d e o seu resto e %d", quociente, resto);
    
        return 0;
    }