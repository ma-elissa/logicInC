#include <stdio.h>
#include <math.h>
    int main() {
        int tempo;
        float capital, taxa;
       
        printf("Qual a valor do seu capital? ");
        scanf("%f", &capital);
        printf("Qual a taxa mensal de rendimento? ");
        scanf("%f%%", &taxa);
        printf("Qual o tempo em meses da sua aplicacao? ");
        scanf("%d", &tempo);
       
        float taxaDoMontante = pow((1 + (taxa / 100)),tempo);
        float montante  = capital * taxaDoMontante;
        float juros = montante - capital;
        float rendimento = (juros / capital) * 100;
        printf("A sua aplicacao teve um rendimento de %.2fR$ durante %d meses com uma taxa de %.2f%%", juros, tempo, rendimento);

        return 0;
    }
