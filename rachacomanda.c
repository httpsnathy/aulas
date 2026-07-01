#include <stdio.h>
#include <string.h>

//variáveis globais
float valorComida = 0, valorBebidaAlcool = 0, valorBebidaNaoAlcool = 0;
float servicoComida = 0, servicoAlcool = 0, servicoNaoAlcool = 0;
float valorTotal = 0;

int qtdCanjica = 0, qtdArrozDoce = 0, qtdPamonha = 0, qtdMilho = 0, qtdPeDeMoleque = 0;
int qtdQuentao = 0, qtdCerveja = 0, qtdRefrigerante = 0;

int pessoas = 1, alcool = 1, naoAlcool = 1;

float historicoComida = 500.0;
float historicoAlcool = 300.0;
float historicoNaoAlcool = 200.0;

//função para exibir o menu inicial
void exibirMenu() {
    printf("\n===== MENU PRINCIPAL =====\n");
    printf("1 - Selecionar cardápio (Adicionar itens)\n");
    printf("2 - Consultar valor da comanda\n");
    printf("3 - Consultar histórico de compras antigo (CPF)\n");
    printf("4 - Pagar parte da comanda (Divisão)\n");
    printf("5 - Pagar comanda total e fechar\n");
    printf("0 - Sair do sistema\n");
    printf("Escolha uma opção: ");
}

//1-selecionar cardápio
void selecionarCardapio() {
    int produto, continuar;
    do {
        printf("\n===== CARDÁPIO FESTA JUNINA =====\n");
        printf("1 - Canjica ------------ R$ 10.00\n");
        printf("2 - Arroz doce --------- R$ 8.00\n");
        printf("3 - Pamonha ------------ R$ 12.00\n");
        printf("4 - Milho cozido ------- R$ 6.00\n");
        printf("5 - Pé de moleque ------ R$ 5.00\n");
        printf("6 - Quentão ------------ R$ 15.00\n");
        printf("7 - Cerveja ------------ R$ 12.00\n");
        printf("8 - Refrigerante ------- R$ 6.00\n");
        printf("Selecione o produto: ");
        scanf("%d", &produto);

        switch(produto) {
            case 1: valorComida += 10.0; qtdCanjica++; break;
            case 2: valorComida += 8.0; qtdArrozDoce++; break;
            case 3: valorComida += 12.0; qtdPamonha++; break;
            case 4: valorComida += 6.0; qtdMilho++; break;
            case 5: valorComida += 5.0; qtdPeDeMoleque++; break;
            case 6: valorBebidaAlcool += 15.0; qtdQuentao++; break;
            case 7: valorBebidaAlcool += 12.0; qtdCerveja++; break;
            case 8: valorBebidaNaoAlcool += 6.0; qtdRefrigerante++; break;
            default: printf("Produto inválido!\n");
        }
        printf("Produto adicionado com sucesso!\n");
        printf("Deseja adicionar mais produtos?\n1 - SIM\n2 - NÃO\nSelecione: ");
        scanf("%d", &continuar);
    } while(continuar == 1);
    printf("\nPedidos atualizados na sacolinha!\n\n");
}

//2-consultar valor da comanda
void consultarComanda() {
    servicoComida = valorComida * 0.1;
    servicoAlcool = valorBebidaAlcool * 0.1;
    servicoNaoAlcool = valorBebidaNaoAlcool * 0.1;
    valorTotal = valorComida + valorBebidaAlcool + valorBebidaNaoAlcool + servicoComida + servicoAlcool + servicoNaoAlcool;

    printf("\n----- SACOLINHA / ATUAL DA COMANDA -----\n");
    printf("Itens pedidos:\n");
    if(qtdCanjica > 0) printf("- %d Canjica(s): R$ %.2f\n", qtdCanjica, qtdCanjica * 10.0);
    if(qtdArrozDoce > 0) printf("- %d Arroz doce(s): R$ %.2f\n", qtdArrozDoce, qtdArrozDoce * 8.0);
    if(qtdPamonha > 0) printf("- %d Pamonha(s): R$ %.2f\n", qtdPamonha, qtdPamonha * 12.0);
    if(qtdMilho > 0) printf("- %d Milho(s) cozido(s): R$ %.2f\n", qtdMilho, qtdMilho * 6.0);
    if(qtdPeDeMoleque > 0) printf("- %d Pé de moleque(s): R$ %.2f\n", qtdPeDeMoleque, qtdPeDeMoleque * 5.0);
    if(qtdQuentao > 0) printf("- %d Quentão(ões): R$ %.2f\n", qtdQuentao, qtdQuentao * 15.0);
    if(qtdCerveja > 0) printf("- %d Cerveja(s): R$ %.2f\n", qtdCerveja, qtdCerveja * 12.0);
    if(qtdRefrigerante > 0) printf("- %d Refrigerante(s): R$ %.2f\n", qtdRefrigerante, qtdRefrigerante * 6.0);
    
    if(valorTotal == 0) {
        printf("(Sua sacolinha está vazia)\n");
    }

    printf("----------------------------------------\n");
    printf("Subtotal Consumo: R$ %.2f\n", valorComida + valorBebidaAlcool + valorBebidaNaoAlcool);
    printf("Taxa de Serviço (10%%): R$ %.2f\n", servicoComida + servicoAlcool + servicoNaoAlcool);
    printf("VALOR TOTAL ATUAL: R$ %.2f\n\n", valorTotal);
}

//3-consultar histórico antigo
void consultarHistorico() {
    char cpfNum[20];
    printf("Digite o CPF para consultar histórico: ");
    scanf("%s", cpfNum);
    printf("\n----- HISTÓRICO DE CONSUMO ANTIGO -----\n");
    printf("Cliente CPF: %s\n", cpfNum);
    printf("Total já gasto em comidas: R$ %.2f\n", historicoComida);
    printf("Total já gasto em bebidas alcoólicas: R$ %.2f\n", historicoAlcool);
    printf("Total já gasto em bebidas não alcoólicas: R$ %.2f\n", historicoNaoAlcool);
    printf("Total geral acumulado: R$ %.2f\n\n", historicoComida + historicoAlcool + historicoNaoAlcool);
}

//4-pagar parte da comanda
void pagarParteComanda() {
    int tipoConsumo;
    printf("\n--- PAGAMENTO PARCIAL (DIVISÃO) ---\n");
    printf("Quantas pessoas vão dividir a COMIDA? ");
    scanf("%d", &pessoas);
    printf("Quantas pessoas vão dividir a BEBIDA ALCOÓLICA? ");
    scanf("%d", &alcool);
    printf("Quantas pessoas vão dividir a BEBIDA NÃO ALCOÓLICA? ");
    scanf("%d", &naoAlcool);

    servicoComida = valorComida * 0.1;
    servicoAlcool = valorBebidaAlcool * 0.1;
    servicoNaoAlcool = valorBebidaNaoAlcool * 0.1;

    printf("\nSelecione o que você vai pagar agora:\n1 - Minha parte da Comida\n2 - Minha parte da Bebida alcoólica\n3 - Minha parte da Bebida não alcoólica\nOpção: ");
    scanf("%d", &tipoConsumo);
    
    float valorParcial;
    switch(tipoConsumo) {
        case 1: valorParcial = (valorComida + servicoComida) / (pessoas > 0 ? pessoas : 1); break;
        case 2: valorParcial = (valorBebidaAlcool + servicoAlcool) / (alcool > 0 ? alcool : 1); break;
        case 3: valorParcial = (valorBebidaNaoAlcool + servicoNaoAlcool) / (naoAlcool > 0 ? naoAlcool : 1); break;
        default: valorParcial = 0; printf("Opção inválida!\n");
    }
           
    printf("Sua parte a pagar agora é: R$ %.2f\n", valorParcial);
       
    if(valorParcial > 0) {
        int formaParcial;
        printf("\nQual será a forma de pagamento?\n1 - Crédito\n2 - Débito\n3 - Pix\nSelecione: ");
        scanf("%d", &formaParcial);
       
        int cpf;
        printf("\nDeseja CPF na nota?\n1 - SIM\n2 - NÃO\nSelecione: ");
        scanf("%d", &cpf);
        if(cpf == 1) {
            char cpfNum[20];
            printf("Digite o CPF: ");
            scanf("%s", cpfNum);
            printf("CPF %s será incluído na nota parcial.\n", cpfNum);
        }
        printf("Pagamento parcial realizado com sucesso!\n");
    }
}

//5-pagar comanda total
void pagarComandaTotal() {
    servicoComida = valorComida * 0.1;
    servicoAlcool = valorBebidaAlcool * 0.1;
    servicoNaoAlcool = valorBebidaNaoAlcool * 0.1;
    valorTotal = valorComida + valorBebidaAlcool + valorBebidaNaoAlcool + servicoComida + servicoAlcool + servicoNaoAlcool;

    printf("\n----- FECHAMENTO DE CONTA -----\n");
    printf("Valor total da conta (com serviço): R$ %.2f\n", valorTotal);
    
    int forma;
    printf("\nQual será a forma de pagamento?\n1 - Crédito\n2 - Débito\n3 - Pix\nSelecione: ");
    scanf("%d", &forma);
    
    switch(forma) {
        case 1: printf("Pagamento selecionado: Crédito\n"); break;
        case 2: printf("Pagamento selecionado: Débito\n"); break;
        case 3: printf("Pagamento selecionado: Pix\n"); break;
        default: printf("Opção inválida!\n");
    }
    int cpf;
    printf("\nDeseja CPF na nota?\n1 - SIM\n2 - NÃO\nSelecione: ");
    scanf("%d", &cpf);
    if(cpf == 1) {
        char cpfNum[20];
        printf("Digite o CPF: ");
        scanf("%s", cpfNum);
        printf("CPF %s inserido na nota.\n", cpfNum);
    } else {
        printf("Sem CPF na nota.\n");
    }
       
    printf("\nAgradecemos a preferência!\nVolte Sempre!!!\n\n");
    
    //zera a comanda atual após o pagamento total
    valorComida = valorBebidaAlcool = valorBebidaNaoAlcool = 0;
    qtdCanjica = qtdArrozDoce = qtdPamonha = qtdMilho = qtdPeDeMoleque = 0;
    qtdQuentao = qtdCerveja = qtdRefrigerante = 0;
}


int main() {
    int opcao;
    do {
        exibirMenu();
        scanf("%d", &opcao);
        switch(opcao) {
            case 1: selecionarCardapio(); break;
            case 2: consultarComanda(); break;
            case 3: consultarHistorico(); break;
            case 4: pagarParteComanda(); break;
            case 5: pagarComandaTotal(); break;
            case 0: printf("Sistema encerrado. Volte Sempre !!!\n"); break;
            default: printf("Opção inválida!\n\n");
        }
    } while(opcao != 0);
    return 0;
}