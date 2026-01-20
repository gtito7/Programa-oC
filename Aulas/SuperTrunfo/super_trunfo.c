#include <stdio.h>

int main() {

    //CARTA 1: NITERÓI
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "Niteroi";
    int populacao1 = 515000;
    float area1 = 130.0;
    float pib1 = 35.0;
    int pontos1 = 15;
    float densidade1 = populacao1 / area1; // Densidade populacional

    //CARTA 2: MACAÉ
    char estado2 = 'B';
    char codigo2[] = "B02";
    char cidade2[] = "Macae";
    int populacao2 = 260000;
    float area2 = 1200.0;
    float pib2 = 30.0;
    int pontos2 = 12;
    float densidade2 = populacao2 / area2; // Densidade populacional

    //EXIBIÇÃO DAS CARTAS
    printf("##### CARTA 1 #####\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

    printf("\n##### CARTA 2 #####\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    return 0;
}