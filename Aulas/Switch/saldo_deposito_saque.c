#include <stdio.h>


int main(){

    int opcao;
    float saldo = 1000.00, deposito, saque;
    int agencia, conta;

    printf("Escolha uma opcao:\n");
    printf("1 - Saldo\n");
    printf("2 - Deposito\n");
    printf("3 - Saque\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Seu saldo é de R$ %.2f\n", saldo);
        break;
        case 2:
            printf("Digite o valor do depósito: \n");
            scanf("%f", &deposito);
            printf("digite a agencia: \n");
            scanf("%d", &agencia);
            printf("digite a conta: \n");
            scanf("%d", &conta);
            saldo += deposito;
            printf("Depósito realizado com sucesso!\n");
            printf("Novo saldo: R$ %.2f\n", saldo);
        break;
        case 3:
            printf("Digite o valor do saque: ");
            scanf("%f", &saque);
            if (saque <= saldo) {
                saldo -= saque;
                printf("Saque realizado com sucesso!\n");
                printf("Novo saldo: R$ %.2f\n", saldo);
            } else {
                printf("Saldo insuficiente!\n");
            }
        break;
        default:
            printf("Opção inválida!\n");
    }   












}