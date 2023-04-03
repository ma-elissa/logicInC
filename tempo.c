#include<stdio.h>
    int main(){
        int segundos;  
        printf("Quantos segundos voce quer converter? ");
        scanf("%d", &segundos);
        
        int horas = segundos / 3600;
        int minutos = (segundos % 3600) / 60;
        segundos = segundos % 60;

        printf("A conversao e igual a %dh:%dmin:%dseg", horas, minutos, segundos);
    
        return 0;
    }