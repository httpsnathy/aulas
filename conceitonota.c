// um algoritmo responsavel pela faciloitacao de notas junto a um conceito
// avaliar uma nota de 1 a 10 e apresentar o conceito
// >0>1o, nota invalida
//>=9 - conteito A excelente
//>=7 - B bom
//>=5 - conceito C - regular
//>=3 - conceito D ruim
//<3 - conceito F reprovado
#include <stdio.h>

int main()
{
    float nota;
    printf("Qual foi a sua nota? ");
    scanf("%f", &nota);
    if(nota<0||nota>10){
        printf("Nota inválida");
    }
    else if(nota>=9){
        printf("Parabéns, Excelente! Conceito A");
    }
    else if(nota>=7){
        printf("Ok, bom. Conceito B");
    }
    else if(nota>=5){
        printf("Tá podendo estudar. Conceito C, regular");
    }
    else if(nota>=3){
        printf("Bem limítrofe. Conceito D");
    }
    else{
        printf("REPROVADO!");
    }

    return 0;
}