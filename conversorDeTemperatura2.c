#include <stdio.h>
    int main() {
        float c, f; 
        
        printf("Qual a temperatura em Celsius? ");
        scanf("%f", &c);
        printf("Qual a temperatura em Fahrenheit? ");
        scanf("%f", &f);

        float conversaoCF = ((c * 9) / 5) + 32;
        float conversaoFC = (((f - 32) * 5) / 9);

        printf("A conversao da temperatura %.2fC para Fahrenheit e: %.2fF\nA conversao da temperatura %.2fF para Celsius e  %.2fC", c, conversaoCF, f, conversaoFC);

        return 0;
    }