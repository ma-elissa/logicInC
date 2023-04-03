#include <stdio.h>
#include <math.h>
    int main() {
        float h, r;
        printf("Digite a altura e o raio do reservatorio: ");
        scanf("%f, %f", &h, &r);
    
        float pi = 3.142;
        float volume;
        volume = ((pi / 3) * pow(h, 2)) * (((3 * r) - h) * - 1); 
            
        printf("O volume do reservatoria e igual a %.2f", volume); 

        return 0;    
    }
