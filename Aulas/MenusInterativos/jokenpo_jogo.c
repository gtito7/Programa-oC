#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("Bem-vindo ao Jogo Jokenpô!\n");
    printf("Pedra, Papel, Tesoura, Spock, Lagarto\n");
    printf("1. Jogar\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção para começar:\n");
    int escolhaOpcao, regras;
    int escolhaJogador, escolhaComputador;
    scanf("%d", &escolhaOpcao);

    switch (escolhaOpcao) {
        case 1:
            printf("Iniciando o jogo...\n");
            srand(time(NULL));
            escolhaComputador = rand() % 5 + 1;
            printf("Escolha sua jogada (1: Pedra, 2: Papel, 3: Tesoura, 4: Lagarto, 5: Spock):\n");
            scanf("%d", &escolhaJogador);
                if (escolhaJogador = 1){
                    printf("Você escolheu: Pedra\n");
                } else if (escolhaJogador = 2){
                    printf("Você escolheu: Papel\n");
                } else if (escolhaJogador = 3){
                    printf("Você escolheu: Tesoura\n");
                } else if (escolhaJogador = 4){
                    printf("Você escolheu: Lagarto\n");
                } else if (escolhaJogador = 5){
                    printf("Você escolheu: Spock\n");
                }     
                if (escolhaComputador == 1){
                    printf("Computador escolheu: Pedra\n");
                } else if (escolhaComputador == 2){
                    printf("Computador escolheu: Papel\n");
                } else if (escolhaComputador == 3){
                    printf("Computador escolheu: Tesoura\n");
                } else if (escolhaComputador == 4){
                    printf("Computador escolheu: Lagarto\n");
                } else if (escolhaComputador == 5){
                    printf("Computador escolheu: Spock\n");
                }
                
            if (escolhaJogador == escolhaComputador) {
                printf("Empate!\n");
            } else if ((escolhaJogador == 1 && (escolhaComputador == 3 || escolhaComputador == 4)) ||
                       (escolhaJogador == 2 && (escolhaComputador == 1 || escolhaComputador == 5)) ||
                       (escolhaJogador == 3 && (escolhaComputador == 2 || escolhaComputador == 4)) ||
                       (escolhaJogador == 4 && (escolhaComputador == 2 || escolhaComputador == 5)) ||
                       (escolhaJogador == 5 && (escolhaComputador == 1 || escolhaComputador == 3))) {
                printf("Você venceu!\n");
                if (escolhaJogador == 1 && escolhaComputador == 3) {
                    printf("Pedra quebra tesoura");
                } else if (escolhaJogador == 1 && escolhaComputador == 4) {
                    printf("Pedra esmaga lagarto");
                } else if (escolhaJogador == 2 && escolhaComputador == 1) {
                    printf("Papel cobre pedra");
                } else if (escolhaJogador == 2 && escolhaComputador == 5) {
                    printf("Papel refuta Spock");
                } else if (escolhaJogador == 3 && escolhaComputador == 2) {
                    printf("Tesoura corta papel");
                } else if (escolhaJogador == 3 && escolhaComputador == 4) {
                    printf("Tesoura decapita lagarto");
                } else if (escolhaJogador == 4 && escolhaComputador == 2) {
                    printf("Lagarto come papel");
                } else if (escolhaJogador == 4 && escolhaComputador == 5) {
                    printf("Lagarto envenena Spock");
                } else if (escolhaJogador == 5 && escolhaComputador == 1) {
                    printf("Spock vaporiza pedra");
                } else if (escolhaJogador == 5 && escolhaComputador == 3) {
                    printf("Spock derrete tesoura");
                }
            } else {
                printf("Você perdeu!\n");
                if (escolhaComputador == 1 && escolhaJogador == 3) {
                    printf("Pedra quebra tesoura");
                } else if (escolhaComputador == 1 && escolhaJogador == 4) {
                    printf("Pedra esmaga lagarto");
                } else if (escolhaComputador == 2 && escolhaJogador == 1) {
                    printf("Papel cobre pedra");
                } else if (escolhaComputador == 2 && escolhaJogador == 5) {
                    printf("Papel refuta Spock");
                } else if (escolhaComputador == 3 && escolhaJogador == 2) {
                    printf("Tesoura corta papel");
                } else if (escolhaComputador == 3 && escolhaJogador == 4) {
                    printf("Tesoura decapita lagarto");
                } else if (escolhaComputador == 4 && escolhaJogador == 2) {
                    printf("Lagarto come papel");
                } else if (escolhaComputador == 4 && escolhaJogador == 5) {
                    printf("Lagarto envenena Spock");
                } else if (escolhaComputador == 5 && escolhaJogador == 1) {
                    printf("Spock vaporiza pedra");
                } else if (escolhaComputador == 5 && escolhaJogador == 3) {
                    printf("Spock derrete tesoura");
                }
            }
            break;
        case 2:
            printf("Regras do Jogo Jokenpô:\n");
            printf("1: Tesoura corta papel\n");
            printf("2: Papel cobre pedra\n");
            printf("3: Pedra esmaga lagarto\n");
            printf("4: Lagarto envenena Spock\n");
            printf("5: Spock derrete tesoura\n");
            printf("6: Tesoura decapita lagarto\n");
            printf("7: Lagarto come papel\n");
            printf("8: Papel refuta Spock\n");
            printf("9: Spock vaporiza pedra\n");
            printf("10: Pedra quebra tesoura\n");
            break;
        case 3:
            printf("Saindo do jogo. Até a próxima!\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }
    return 0;
} 