#include <stdio.h>
    int main() {
        float numero1, numero2;
        char operador;
        printf("Digite a operacao que voce deseja realizar, ex:20-30): ");
        scanf("%f%c%f", &numero1, &operador, &numero2);
        
        char simbolo = operador != ('*' || '+' ||'-' || '/');
        
        if(operador == '*'){
           float multiplicacao = numero1 * numero2;
           printf("O resultado da operacao foi %.2f", multiplicacao);
        }
        else if(operador == '/'){
           float divisao = numero1 / numero2;
           printf("O resultado da operacao foi %.2f", divisao);
        }
        else if(operador == '+'){
            float soma = numero1 + numero2;
            printf("O resultado da operacao foi %.2f", soma);
        }
        else if(operador == '-'){
            float subtracao = numero1 - numero2;
            printf("O resultado da operacao foi %.2f", subtracao);
        }
        else if(simbolo){
            printf("Operacao invalida");
        }
    
        return 0; 
    }