#include <stdio.h>
int main(){
    float a, b, c;
    int resposta;
    printf("Olá, você tem algum triângulo por aí?\nNão sabe? Vamos descobrir!\n");
    printf("Primeiro, ele tem três lados?\n1-sim\n2-não\nResposta: ");
    scanf("%i", &resposta);
    if(resposta==1){
        printf("Ok, ok, então vamos lá\n");
    }
    else{
        printf("Você já devia saber que o mínimo pra se ter um triângulo é ter 3 lados, isso é muito básico.");
        
        return 0;
    }
    printf("Digite a medida do primeiro lado: ");
    scanf("%f", &a);
    printf("Bom, agora digite a medida do segundo lado: ");
    scanf("%f", &b);
    printf("Bom, bom, agora digite a medida do terceiro lado: ");
    scanf("%f", &c);
    if(a+b>c&&a+c>b&&b+c>a) {
        printf("Wow! É um triângulo mesmo! Consegui calcular aqui também que ele é um triângulo ");
    }
    else {
        printf("Ah, eu não me interesso por formas que não sejam um triângulo. Volte aqui quando tiver um de verdade!");
        
        return 0;
    }
    if(a==b&&b==c){
        printf("isósceles, pois todos os lados são iguais.");
    }
    else if(a==b||a==c){
        printf("equilátero, pois apenas dois lados são iguais.");
    }
    else{
        printf("escaleno, pois todos os lados são diferentes.");
    }
    
    return 0;
}