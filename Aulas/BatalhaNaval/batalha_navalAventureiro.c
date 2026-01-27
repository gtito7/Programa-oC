#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {

    int tabuleiro[LINHAS][COLUNAS];
    int i, j;

    // Inicializa zerado
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // Navio 1 -Horizontal (linha 2, colunas D a F)
    for (j = 3; j < 6; j++)
    {
        if (tabuleiro[2][j] == 0)
        {
            tabuleiro[2][j] = 3;
        }
    }

    // Navio 2 - vertical (coluna G, linhas 6 a 8)
    for (i = 5; i < 8; i++)
    {
        if (tabuleiro[i][1] == 0)
        {
            tabuleiro[i][1] = 3;
        }
    }

    //Navio 3 - Diagonal Principal
    int linhaDiagonal1 = 0;
    int colunaDiagonal1 = 0;

    for (i = 0; i < 3; i++)
    {
        if (tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] == 0)
        {
            tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] = 3;
        }
    }

    //Navio 4 - Diagonal Secundario
    int linhaDiagonal2 = 0;
    int colunaDiagonal2 = COLUNAS - 1;

    for (i = 0; i < 3; i++)
    {
        if (tabuleiro[linhaDiagonal2 + i][colunaDiagonal2 - i] == 0)
        {
            tabuleiro[linhaDiagonal2 + i][colunaDiagonal2 - i] = 3;
        }
    }

    // Exibe letras das colunas
    printf("   ");
    for (j = 0; j < COLUNAS; j++)
    {
        printf(" %c", 'A' + j);
    }
    printf("\n");

    // Exibe Números das linhas
    for (i = 0; i < LINHAS; i++)
    {
        printf("%2d ", i + 1);

        for (j = 0; j < COLUNAS; j++)
        {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}