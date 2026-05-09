#include <stdio.h>
int main(){
    int opcao;
    float num1, num2, resultado;
    printf("BEM-VINDO A SUA CALCULADORA\n");
    do{
        printf("Qual cálculo você gostaria de fazer agora?\n1-SOMA\n2-SUBTRACAO\n3-MULTIPLICAÇÃO\n4-DIVISAO\n5-SAIR\n");
        scanf("%i", &opcao);
        if(opcao==1){
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado=(num1+num2);
            printf("A soma de %f + %f é %f\n", num1, num2, resultado);
        }
        else if(opcao==2){
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado=(num1-num2);
            printf("A subtração de %f - %f é %f\n", num1, num2, resultado);
        }
        else if(opcao==3){
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado=(num1*num2);
            printf("A multiplicação de %f X %f é %f\n", num1, num2, resultado);
            
        }
        else if(opcao==4){
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado=(num1/num2);
            printf("A divisão de %f / %f é %f\n", num1, num2, resultado);
        }
        else if(opcao==5){
            printf("Ok, até a próxima!\n");
            return 0;
        }
        else{
            printf("NÚMERO INVÁLIDO\n");
        }
    }while(opcao!=5);
    
    return 0;
}