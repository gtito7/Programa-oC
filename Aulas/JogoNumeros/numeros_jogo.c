#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    int numeroSecreto = rand() % 100 + 1;
    int resultado;

    printf("Bem-vindo ao Jogo de Números!\n");
    printf("Você deve escolher um número e o tipo de comparação:\n");
    printf("M - Maior\n");
    printf("N - Menor\n");
    printf("I - Igual\n");

    printf("Escolha a comparação (M, N ou I): ");
    char tipoComparacao;
    scanf(" %c", &tipoComparacao);

    printf("Escolha um número entre 1 e 100: ");
    int numeroUsuario;
    scanf("%d", &numeroUsuario);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu MAIOR.\n");
        resultado = numeroUsuario > numeroSecreto ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu MENOR.\n");
        resultado = numeroUsuario < numeroSecreto ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu IGUAL.\n");
        resultado = numeroUsuario == numeroSecreto ? 1 : 0;
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }

    if (resultado == 1) {
        printf("Parabéns! Você acertou!\n");
        printf("O número secreto era %d.\n", numeroSecreto);
    } else {
        printf("Que pena! Você errou. O número secreto era %d.\n", numeroSecreto);
    }

}