//atualizar: nao deixar usuario depositar ou sacar valor negativo
#include <stdio.h>

int main(){
    int opcao;
    float saldo=0, valor;
    
    do{
    printf("CONTA BANCÁRIA\n1-SALDO\n2-DEPOSITAR\n3-SACAR\n4-SAIR\nSelecione: ");
    scanf("%i", &opcao);
    switch(opcao){
        case 1:
        printf("Seu saldo é de R$%.2f\n", saldo);
        break;
        case 2:
        printf("Quanto deseja depositar? R$ ");
        scanf("%f", &valor);
        if(valor<0){
            printf("Não é possível depositar valores negativos!\n");
        }
        else{
        saldo=(saldo+valor);
        printf("Parabéns, você depositou R$%.2f e agora possui R$%.2f\n", valor, saldo);
        }
        break;
        case 3:
        printf("Você possui R$%.2f\nQuanto você deseja sacar? R$ ", saldo);
        scanf("%f", &valor);
        if(valor<0){
            printf("Não é possível sacar valores negativos!\n");
        }
        else if(valor<=saldo){
            saldo-=valor;
            printf("Parabéns, você sacou R$%.2f e agora possui R$%.2f\n", valor, saldo);
        }
        else{
            printf("Saldo insuficiente!\n");
        }
        break;
        case 4:
        printf("Ok, até a próxima!");
        return 0;
        break;
        default:
        printf("Número inválido\n");
    }
    printf("Deseja voltar ao menu inicial?\n1-SIM\n2-NÃO\n");
    scanf("%i", &opcao);
    }while(opcao==1);
    printf("Ok, até a próxima!");
    
    
    
    return 0;
}