//estacionamento: Com base no tipo de veiculo, e na quant de horas,calcule o valor do estacionamento
//ler qual tipo de veiculo (moto, carro, caminhão, onibus)
//ler quant horas
// valor hora: moto(2,00), carro(3,50), caminhão (5,00), onibus (10,00)
#include <stdio.h>
int main(){
    int opcao, horas;
    float valor;
    printf("QUAL VALOR VOCÊ DEVE PAGAR PELO ESTACIONAMENTO?\n");
    printf("Escolha a opção que corresponde ao seu tipo de veículo:\n1- MOTOCICLETA");
    printf("\n2- CARRO\n3- CAMINHÃO\n4- ÔNIBUS\n");
    scanf("%i", &opcao);
    switch(opcao){
        case 1:
        printf("Quantas horas você ficou? ");
        scanf("%i", &horas);
        valor=(2.00*horas);
        printf("VALOR DA HORA PARA MOTOCICLETAS: R$2,00\nO valor a ser pago é de R$%.2f", valor);
        break;
        case 2:
        printf("Quantas horas você ficou? ");
        scanf("%i", &horas);
        valor=(3.50*horas);
        printf("VALOR DA HORA PARA CARROS: R$3,50\nO valor a ser pago é de R$%.2f", valor);
        break;
        case 3:
        printf("Quantas horas você ficou? ");
        scanf("%i", &horas);
        valor=(5.00*horas);
        printf("VALOR DA HORA PARA CAMINHÕES: R$5,00\nO valor a ser pago é de R$%.2f", valor);
        break;
        case 4:
        printf("Quantas horas você ficou? ");
        scanf("%i", &horas);
        valor=(10.00*horas);
        printf("VALOR DA HORA PARA ÔNIBUS: R$10,00\nO valor a ser pago é de R$%.2f", valor);
        break;
        default:
        printf("NÚMERO INVÁLIDO");
    }
    
    
    
    
    
    
    return 0;
}