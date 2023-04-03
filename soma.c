#include <stdio.h>
   int main() {
      int num1, num2;
      printf("Digite um numero: ");
      scanf("%d", &num1);

      printf("Digite um segundo numero: ");
      scanf("%d", &num2);

      int soma = num1 + num2;
      printf("A soma dos numeros %d + %d = %d", num1, num2, soma);

      return 0;
   }

