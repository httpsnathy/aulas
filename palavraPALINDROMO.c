//fgets - lê o texto digitado, mas com espaços
//stdin - por onde os dados estão sendo introduzidos (teclado)
//strlen- diz o tamanho da string, conta o \0 e \n (ele mesmo adiciona o \n)
// \0 é adicionado sempre no final de uma string, por isso o -1 no calculo
//strcpy - copia uma string
//quando dá enter, fgets adiciona um \n no final, então atrapalha no calculo da posição
#include <stdio.h>
#include <string.h> //manipular strings

int main()
{
    char palavra[50];
    
    int inicio=0, fim, isPalindromo=1;
    // 1 - true, 0 - false
    // 1- é palindromo, 0 - não é palindromo
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    //sizeof - quando não sabe a quantidade de chars na variável
    
    fim=strlen(palavra)-1;
    //a posição começa em 0, então apra tirar a ultima posição (\0), temos o -1
    
    while(inicio<fim){
        if(palavra[inicio] != palavra[fim]){
            isPalindromo = 0;
        }
        inicio++;
        fim--;
        
    }
    
    if (isPalindromo){
        printf("A palavra é um palíndromo!");
    }
    else{
        printf("A palavra NÃO é um palíndromo!");
    }
    

    return 0;
}

// ARARA, OVO, ANA, OSSO, RADAR
//SUBI NO ONIBUS - frase
//AME O POEMA - frase
// RACE CAR - frase

