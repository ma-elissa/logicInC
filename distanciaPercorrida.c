#include <stdio.h>
    int main() { 
        float velocidade, tempo;
        
        printf("Qual a velocidade em que voce estava se movimentando? ");
        scanf("%f", &velocidade);
        printf("Quanto tempo voce levou para chegar ao seu destino? ");
        scanf("%f", &tempo);

        float distancia;
        distancia = velocidade * tempo; 
        float consumo; 
        consumo = distancia / 12;

        printf("A distancia percorrida foi de %.2fKm e o consumo foi de %.2fL", distancia, consumo);
        
        return 0;
    }