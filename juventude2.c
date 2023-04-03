#include<stdio.h>
    int main(){
        float peso;
        printf("Digite o seu peso: ");
        scanf("%f", &peso);

        int altura, ano, dia, idade;
        printf("Digite sua altura em centimetros: ");
        scanf("%d", &altura);

        printf("Digite o ano do seu nascimento: ");
        scanf("%d", &ano);

        printf("Digite o dia do seu nascimento: ");
        scanf("%d", &dia);

        printf("Digite sua idade: ");
        scanf("%d", &idade);
        
        float f = (((((peso + altura) / idade) + ano) * dia) - 33) * (idade + 7);

        printf("O resultado da sua formula da juventude e igual a %.2f", f);
        
        return 0;
    }