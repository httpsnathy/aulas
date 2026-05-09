// Digitar e ler o numero do usuário
// qual dia da semana será referente ao numero que o usuario colocou
//1-domingo, 2- segunda... 7- sábado
// FINAL: gostaria de retornar para saber mais dias? 1-sim 2-não
#include <stdio.h>

int main()
{
    int opcao, dias, dia_semana;
    printf("Olá, você gostaria de saber o dia da semana em X dias?\n1-SIM\n2-NÃO\n");
    scanf("%i", &opcao);
    do{
    if(opcao==1){
        printf("Que tudo! Lembrando que hoje é QUINTA-FEIRA, dia 07/05/2026\nDaqui quantos dias você gostaria de saber o dia da semana? ");
        scanf("%i", &dias);
        int dia_semana=((dias-1)%7)+1;
        
        switch(dia_semana){
            case 1:
            printf("Sexta-feira\n");
            break;
            case 2:
            printf("Sábado\n");
            break;
            case 3:
            printf("Domingo\n");
            break;
            case 4:
            printf("Segunda-feira\n");
            break;
            case 5:
            printf("Terça-feira\n");
            break;
            case 6:
            printf("Quarta-feira\n");
            break;
            case 7:
            printf("Quinta-feira\n");
            break;
            
        }
    }else{
        printf("Ok, até a próxima!\n");
        return 0;
    }
    
    printf("Gostaria de recomeçar?\n1-SIM\n2-NÃO\n");
    scanf("%i", &opcao);
    }while(opcao==1);
    printf("Ok, até a próxima!");

    
    return 0;
}
