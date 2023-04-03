#include <stdio.h>
    int main(){
        char pessoa;
        float valor, lucro, desconto, imposto;
        printf("Digite F para pessoa fisica e J para pessoa juridica: ");
        scanf("%c", &pessoa);

        if(pessoa == 'F'){
            printf("Qual o valor do seu ganho anual: ");
            scanf("%f", &valor);
            if(valor <=  13000){
                imposto = 0.00;
            }else{
                imposto = valor * 0.15;
            }
        }
        if (pessoa == 'J'){
            printf("Qual o valor do lucro anual da empresa? ");
            scanf("%f", &lucro);
            printf("Qual o valor do desconto? ");
            scanf("%f", &desconto);     
            imposto = (lucro * 0.25) - desconto;
        }
        printf("O total do valor a ser pago e %.2f", imposto);
        
        return 0;
    }