#include <stdio.h>
    int main() {
        char sexo; 
        printf("Digite M ou F para o sexo do bebe: ");
        scanf("%c", &sexo);

        if(sexo == 'F') {
            printf("O bebe e uma menina!");
        }
        else{
            printf("O bebe e um menino!");
        }
    
        return 0;
    }