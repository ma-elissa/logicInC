#include <stdio.h>
    int main() {
        float c, f; 
        printf("Qual a temperatura em Celsius? ");
        scanf("%f", &c);

        f = ((c * 9) / 5) + 32;

        printf("A conversao da temperatura %.2f Celsius para Fahrenheit e igual a %.2f", c, f);

        return 0;
    }