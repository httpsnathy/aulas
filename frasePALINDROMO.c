// isalpha?
// pra que o j?
// tolower - garante que todas as letras fiquem minúsculas para nao ter diferença
//qual a diferença de '' e ""?
// pq eu nao uso a variavel FRASE ao invés de LIMPA em quase todo algoritmo?

//algoritmo de palíndromo muito usado em entrevista de emprego na área de programação

#include <stdio.h>
#include <string.h> //manipular strings
#include <ctype.h> //manipular o tipo de texto

int main()
{
    char frase[50], limpa[50];
    
    int inicio=0, fim, isPalindromo=1;
    // 1 - true, 0 - false
    // 1- é palindromo, 0 - não é palindromo
    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    //sizeof - quando não sabe a quantidade de chars na variável
    
    int j=0;
    
    for (int i=0; frase[i]; i++){
        if(isalpha(frase[i])){
            limpa[j] = tolower(frase[i]);
            j++;
        }
    }
    
    limpa[j] = '\0';
    
    fim=strlen(limpa)-1;
    
    while(inicio<fim){
        if(limpa[inicio] != limpa[fim]){
            isPalindromo = 0;
        }
        inicio++;
        fim--;
        
    }
    
    if (isPalindromo){
        printf("A frase é um palíndromo!");
    }
    else{
        printf("A frase NÃO é um palíndromo!");
    }
    

    return 0;
}