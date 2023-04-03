#include <stdio.h>
#include <math.h>
    int main() {
        float coordenadaY1, coordenadaX1;
        float coordenadaY2, coordenadaX2;
        
        printf("Digite a coordenada X e Y do primeiro ponto: ");
        scanf("%f, %f", &coordenadaX1, &coordenadaY1);
        printf("Digite a coordenada X e Y do segundo ponto: ");
        scanf("%f, %f", &coordenadaX2, &coordenadaY2);

        float distancia = sqrt(pow(coordenadaX2 - coordenadaX1, 2) + pow(coordenadaY2 - coordenadaY1, 2));

        printf("A distancia entre os dois pontos foi de %.2f", distancia);
        
        return 0;
    }