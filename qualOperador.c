#include <stdio.h>
    int main() {
        char operador;
        printf("Digite um operador matematico: ");
        scanf("%c", &operador);

        if(operador == '+') {
            printf("Simbola da soma");
        }
        else if(operador == '-') {
            printf("Simbolo da subtracao");
        }
        else if(operador == '*') {
            printf("Simbolo da multiplicacao");
        }
        else if(operador == '/') {
            printf("Simbolo da divisao");
        }
        else if(operador == '%') {
            printf("Simbolo do resto da divisao ou da porcentagem");
        }
        else{
            printf("Isso nao e um operador matematico");
        }
        return 0;
    }
