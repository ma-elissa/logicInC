#include <stdio.h>
    int main() {
        float porcentagem1, porcentagem2, porcentagem3, valorTotal;

        printf("Digite o valor total: ");
        scanf("%f", &valorTotal);
        printf("Digite a porcentagem que cada um dos tres socios ira receber: ");
        scanf("%f, %f, %f", &porcentagem1, &porcentagem2, &porcentagem3);

        float valorPorcentagem1 = valorTotal * porcentagem1 / 100;
        float valorPorcentagem2 = valorTotal * porcentagem2 / 100;
        float valorPorcentagem3 = valorTotal * porcentagem3 / 100;
        
        printf("O valor para %.2f%% e de %.2f\nO valor para %.2f%% e de %.2f\nO valor para %.2f%% e de %.2f\n", porcentagem1, valorPorcentagem1, porcentagem2, valorPorcentagem2, porcentagem3, valorPorcentagem3);
        
        return 0;
    }