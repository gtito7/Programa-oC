#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Bem-vindo ao Jogo de Números!\n");
    srand(time(0));
    int numeroSecreto = rand() % 100 + 1; // Número secreto entre 1 e 100
    int palpite;
    int tentativas = 0;

    printf("Tente adivinhar o número secreto entre 1 e 100:\n");
    do {
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numeroSecreto) {
            printf("Muito baixo! Tente novamente:\n");
        } else if (palpite > numeroSecreto) {
            printf("Muito alto! Tente novamente:\n");
        } else {
            printf("Parabéns! Você adivinhou o número secreto %d em %d tentativas!\n", numeroSecreto, tentativas);
        }
    } while (palpite != numeroSecreto);

    return 0;
}