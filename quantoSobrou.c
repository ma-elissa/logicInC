#include <stdio.h>
    int main() {
        int qProduto[3];
        float preco[3];
        
        printf("Digite as quantidades dos tres produtos que voce deseja comprar: ");
        scanf("%d, %d, %d", &qProduto[0], &qProduto[1], &qProduto[2]);
        printf("Digite o preco de cada produto: ");
        scanf("%f, %f, %f", &preco[0], &preco[1], &preco[2]);

        float tP0 = qProduto[0] * preco[0];
        float tP1 = qProduto[1] * preco[1];
        float tP2 = qProduto[2] * preco[2];
        
        printf("O valor total do\n Produto 1: %.2fR$\n Produto 2: %.2fR$\n Produto 3: %.2fR$\n", tP0, tP1, tP2);

        float dinheiro;
        printf("Digite a quantia de dinheiro que voce possue: ");
        scanf("%f", &dinheiro);
        
        float total = qProduto[0] * preco[0] + qProduto[1] * preco[1] + qProduto[2] * preco[2];
        float troco = dinheiro - total;
            
        printf("O valor total da sua compra foi %.2fR$ e o seu troco e %.2fR$", total, troco);

        return 0;
    }