#include <stdio.h>
    int main() {
        int diaAltual, mesAtual, anoAtual;
        printf("Em que dia voce esta fazendo o teste? ");
        scanf("%d/%d/%d", &diaAltual, &mesAtual, &anoAtual);

        int diaNas, mesNas, anoNas;
        printf("Digite a data do seu nascimento: ");
        scanf("%d/%d/%d", &diaNas, &mesNas, &anoNas);
            
        int idade;
        printf("Qual a sua idade? ");
        scanf("%d", &idade);

        printf("Voce nasceu no dia %d do mes %d no ano de %d e sua idade e %d", diaNas, mesNas, anoNas, idade);
    
        return 0;
    }
