#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){


    printf("Bem-vindo ao Jogo Interativo!\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção para começar:\n");
    int escolha, regras;
    int numeroSecreto, palpite;
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Iniciando o jogo...\n");
            // Código para iniciar o jogo
            srand(time(NULL));
            numeroSecreto = rand() % 10 + 1; // Número secreto entre 1 e 10
            printf("Tente adivinhar o número secreto entre 1 e 10:\n");
            do { // Loop até o jogador adivinhar corretamente
                scanf("%d", &palpite);
                if (palpite < numeroSecreto) {
                    printf("Muito baixo! Tente novamente:\n");
                } else if (palpite > numeroSecreto) {
                    printf("Muito alto! Tente novamente:\n");
                } else {
                    printf("Parabéns! Você adivinhou o número secreto %d!\n", numeroSecreto);
                }
           } while (palpite != numeroSecreto); // Fim do loop
            break;
        case 2:
            printf("Regras do Jogo:\n");
            printf("1. Regra 1\n");
            printf("2. Regra 2\n");
            printf("3. Regra 3\n");
            printf("Escolha uma regra para ver mais detalhes:\n");
            scanf("%d", &regras);
            switch (regras) {
                case 1:
                    printf("Detalhes da Regra 1...\n");
                    break;
                case 2:
                    printf("Detalhes da Regra 2...\n");
                    break;
                case 3:
                    printf("Detalhes da Regra 3...\n");
                    break;
                default:
                    printf("Opção inválida para regras.\n");
                    break;
            }   
            // Código para mostrar as regras
            break;
        case 3:
            printf("Saindo do jogo. Até a próxima!\n");
            // Código para sair
            break;
        default:
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
            break;
    }















}