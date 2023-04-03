#include <stdio.h>
    int main() {
        float valorDoProduto;
        float valorDoDesconto;
        
        printf("Qual o valor do produto? ");
        scanf("%f", &valorDoProduto);
        printf("Qual o percentual do desconto? ");
        scanf("%f%%", &valorDoDesconto);

        float desconto = valorDoProduto * (valorDoDesconto / 100);
        float valorComDesconto = valorDoProduto - desconto; 
        
        printf("O valor do produto com um desconto de %.2f%% e de %.2fR$", valorDoDesconto, valorComDesconto);

        return 0; 
    }