#include<stdio.h>
    int main() {
        int num1, num2;
        printf("Digite um primeiro numero: ");
        scanf("%d", &num1);

        printf("Digite uma segundo numero: ");
        scanf("%d", &num2);

        int media = (num1 + num2) / 2;

        printf("A media aritmetica dos numeros %d e %d e igual a %d ", num1, num2, media);
            
        return 0;
    }