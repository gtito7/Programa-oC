#include <stdio.h>
#include <stdlib.h>

#define LINHAS 10
#define COLUNAS 10
#define HABILIDADE 5

#define AGUA 0
#define CONE 1
#define OCTAEDRO 2
#define CRUZ 3

int main() {

    int tabuleiro[LINHAS][COLUNAS];
    int i, j;

    // Inicializa tabuleiro
    for (i = 0; i < LINHAS; i++)
        for (j = 0; j < COLUNAS; j++)
            tabuleiro[i][j] = AGUA;


    /*
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

    */

    // Matrizes das habilidades
    int cone[HABILIDADE][HABILIDADE];
    int cruz[HABILIDADE][HABILIDADE];
    int octaedro[HABILIDADE][HABILIDADE];

    int centroHab = HABILIDADE / 2;
    int centroCone = HABILIDADE / 2;

    // CONE
    for (i = 0; i < HABILIDADE; i++)
{
    for (j = 0; j < HABILIDADE; j++)
    {
        if (i <= 2 && j >= centroCone - i && j <= centroCone + i)
            cone[i][j] = 1;
        else
            cone[i][j] = 0;
    }
}

    // CRUZ
    for (i = 0; i < HABILIDADE; i++)
    {
        for (j = 0; j < HABILIDADE; j++)
        {
            if (i == centroHab || j == centroHab)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }

    // OCTAEDRO
    for (i = 0; i < HABILIDADE; i++)
    {
        for (j = 0; j < HABILIDADE; j++)
        {
            if (abs(i - centroHab) + abs(j - centroHab) <= centroHab)
                octaedro[i][j] = 1;
            else
                octaedro[i][j] = 0;
        }
    }

    // Pontos de origem
    int coneL = 4, coneC = 2;
    int octL = 2, octC = 7;
    int cruzL = 7, cruzC = 7;

    // Resolve CONE
    for (i = 0; i < HABILIDADE; i++)
    {
        for (j = 0; j < HABILIDADE; j++)
        {
            int l = coneL + i - centroCone;
            int c = coneC + j - centroCone;

            if (l >= 0 && l < LINHAS && c >= 0 && c < COLUNAS)
            {
                if (cone[i][j] == 1 && tabuleiro[l][c] == AGUA)
                    tabuleiro[l][c] = CONE;
            }
        }
    }

    // APLICA CRUZ
    for (i = 0; i < HABILIDADE; i++)
    {
        for (j = 0; j < HABILIDADE; j++)
        {
            int l = cruzL + i - centroHab;
            int c = cruzC + j - centroHab;

            if (l >= 0 && l < LINHAS && c >= 0 && c < COLUNAS)
            {
                if (cruz[i][j] == 1 && tabuleiro[l][c] == AGUA)
                    tabuleiro[l][c] = CRUZ;
            }
        }
    }

    // APLICA OCTAEDRO
    for (i = 0; i < HABILIDADE; i++)
    {
        for (j = 0; j < HABILIDADE; j++)
        {
            int l = octL + i - centroHab;
            int c = octC + j - centroHab;

            if (l >= 0 && l < LINHAS && c >= 0 && c < COLUNAS)
            {
                if (octaedro[i][j] == 1 && tabuleiro[l][c] == AGUA)
                    tabuleiro[l][c] = OCTAEDRO;
            }
        }
    }

    // Exibição
    printf("   ");
    for (j = 0; j < COLUNAS; j++)
        printf(" %c", 'A' + j);
    printf("\n");

    for (i = 0; i < LINHAS; i++)
    {
        printf("%2d ", i + 1);
        for (j = 0; j < COLUNAS; j++)
            printf(" %d", tabuleiro[i][j]);
        printf("\n");
    }

    return 0;
}