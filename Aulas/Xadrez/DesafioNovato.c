#include <stdio.h>

int main() {

    //TORRE (for)
    int Torre;
    int direcaoTorre;

    printf("## TORRE ##\nQuantas casas deseja mover? ");
    scanf("%d", &Torre);

    printf("Direção (1-Cima, 2-Baixo, 3-Esquerda, 4-Direita): ");
    scanf("%d", &direcaoTorre);

    for (int i = 1; i <= Torre; i++)
    {
        if (direcaoTorre == 1) printf("Cima\n");
        else if (direcaoTorre == 2) printf("Baixo\n");
        else if (direcaoTorre == 3) printf("Esquerda\n");
        else if (direcaoTorre == 4) printf("Direita\n");
    }

    printf("\n");

    // BISPO (While)
    int Bispo;
    int casasBispo = 1;
    int direcaoBispo;

    printf("## BISPO ##\nQuantas casas deseja mover? ");
    scanf("%d", &Bispo);

    printf("Direção do Bispo:\n");
    printf("1 - Cima, Direita\n");
    printf("2 - Cima, Esquerda\n");
    printf("3 - Baixo, Direita\n");
    printf("4 - Baixo, Esquerda\n");
    scanf("%d", &direcaoBispo);

    while (casasBispo <= Bispo) {
    if (direcaoBispo == 1)
        printf("Cima, Direita\n");
    else if (direcaoBispo == 2)
        printf("Cima, Esquerda\n");
    else if (direcaoBispo == 3)
        printf("Baixo, Direita\n");
    else if (direcaoBispo == 4)
        printf("Baixo, Esquerda\n");

    casasBispo++;
    }

    printf("\n");

    // RAINHA (Do While)
    int Rainha;
    int direcaoRainha;
    int casasRainha = 1;

    printf("## RAINHA ##\nQuantas casas deseja mover? ");
    scanf("%d", &Rainha);

    printf("Direção (1-Cima, 2-Baixo, 3-Esquerda, 4-Direita): ");
    scanf("%d", &direcaoRainha);

    do {
        if (direcaoRainha == 1) printf("Cima\n");
        else if (direcaoRainha == 2) printf("Baixo\n");
        else if (direcaoRainha == 3) printf("Esquerda\n");
        else if (direcaoRainha == 4) printf("Direita\n");

        casasRainha++;
    } while (casasRainha <= Rainha);

    return 0;
}