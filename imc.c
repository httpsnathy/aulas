#include <stdio.h>
#include <math.h>
int main()
{
    float peso, altura, imc;
    printf("Digite o peso em kg: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    imc=peso/pow(altura, 2);
    printf("IMC: %.2f - ", imc);
    if(imc<18.5){
        printf("Oh não! Você está abaixo do peso!");
    }
    else if(imc<25){
        printf("Código verde! Você está com o peso ideal!");
    }
    else if(imc<30){
        printf("Código laranja! Está com sobrepeso!");
    }
    else{
        printf("Código vermelho! Você está obeso!");
    }

    return 0;
}