#include <stdio.h>
    int main(){
        float valor;
        printf("Digite o valor da sua renda mensal: ");
        scanf("%f", &valor);
    
        if(valor <= 324 ) {
            printf("Classificado na classe social Extremamente pobre");
        }
        else if(valor <= 648) {
            printf("Classificado na classe social Pobre");
        }
        else if (valor <= 1.164) {
            printf("Classificado na classe social Vulneravel");
        }
        else if(valor <= 1.764) {
            printf("Classificado na classe social Baixa classe media");
        }
        else if(valor <= 2.564) {
            printf("Classificado na classe social Media classe media");
        }
        else if (valor <= 4.076) {
            printf("Classificado na classe social Alta classe media");
        }
        else if(valor <= 9.920) {
            printf("Classificado na classe social Baixa classe alta");
        }
        else if(valor >= 9.920) {
            printf("Classificado na classe social Alta classe alta");

        } 
         
        return 0;
    }