#include <stdio.h>

int main() {

    int tabuleiro[10][10];
    int i, j;

    // Inicializa zerado
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // Navio Horizontal (linha 2, colunas D a F)
    for (j = 3; j < 6; j++)
    {
        tabuleiro[2][j] = 3;
    }

    // Navio vertical (coluna G, linhas 6 a 8)
    for (i = 5; i < 8; i++)
    {
        tabuleiro[i][1] = 3;
    }

    // Exibe letras das colunas
    printf("   ");
    for (j = 0; j < 10; j++)
    {
        printf(" %c", 'A' + j);
    }
    printf("\n");

    // Números das linhas
    for (i = 0; i < 10; i++)
    {
        printf("%2d ", i + 1);   // Numeração de 1 a 10

        for (j = 0; j < 10; j++)
        {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}