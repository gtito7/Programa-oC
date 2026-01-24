#include <stdio.h>

int main() {

    //CARTA 1: NITERÓI
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "Niterói";
    int populacao1 = 515000;
    float area1 = 130.0;
    float pib1 = 35.0;
    int pontos1 = 15;
    float densidade1 = populacao1 / area1; // Densidade populacional
    float superPoder1 = (populacao1 + area1 + pib1 + pontos1); // Pontos do super poder

    //CARTA 2: MACAÉ
    char estado2 = 'B';
    char codigo2[] = "B02";
    char cidade2[] = "Macaé";
    int populacao2 = 260000;
    float area2 = 1200.0;
    float pib2 = 30.0;
    int pontos2 = 12;
    float densidade2 = populacao2 / area2; // Densidade populacional
    float superPoder2 = (populacao2 + area2 + pib2 + pontos2); // Pontos do super poder

    //CARTA 3: CABO FRIO
    char estado3 = 'C';
    char codigo3[] = "C03";
    char cidade3[] = "Cabo Frio";
    int populacao3 = 230000;
    float area3 = 410.0;
    float pib3 = 25.0;
    int pontos3 = 10;
    float densidade3 = populacao3 / area3; // Densidade populacional
    float superPoder3 = (populacao3 + area3 + pib3 + pontos3); // Pontos do super poder

    //CARTA 4: Rio de Janeiro
    char estado4 = 'D';
    char codigo4[] = "D04";
    char cidade4[] = "Rio de Janeiro";
    int populacao4 = 6700000;
    float area4 = 1200.0;
    float pib4 = 300.0;
    int pontos4 = 50;
    float densidade4 = populacao4 / area4; // Densidade populacional
    float superPoder4 = (populacao4 + area4 + pib4 + pontos4); // Pontos do super poder

    //CARTA 5: Petrópolis
    char estado5 = 'E';
    char codigo5[] = "E05";
    char cidade5[] = "Petrópolis";
    int populacao5 = 300000;
    float area5 = 800.0;
    float pib5 = 40.0;
    int pontos5 = 20;
    float densidade5 = populacao5 / area5; // Densidade populacional
    float superPoder5 = (populacao5 + area5 + pib5 + pontos5); // Pontos do super poder

    //CARTA 6: Volta Redonda
    char estado6 = 'F';
    char codigo6[] = "F06";
    char cidade6[] = "Volta Redonda";
    int populacao6 = 280000;
    float area6 = 400.0;
    float pib6 = 45.0;
    int pontos6 = 18;
    float densidade6 = populacao6 / area6; // Densidade populacional
    float superPoder6 = (populacao6 + area6 + pib6 + pontos6); // Pontos do super poder

    //EXIBIÇÃO DAS CARTAS
    printf("##### CARTA 1 #####\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Pontos de Super Poder: *%.2f*\n\n", superPoder1);

    printf("\n##### CARTA 2 #####\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pontos de Super Poder: *%.2f*\n\n", superPoder2);

    printf("\n##### CARTA 3 #####\n");
    printf("Estado: %c\n", estado3);
    printf("Código: %s\n", codigo3);
    printf("Nome da Cidade: %s\n", cidade3);
    printf("População: %d\n", populacao3);
    printf("Área: %.2f km²\n", area3);
    printf("PIB: %.2f bilhões de reais\n", pib3);
    printf("Número de Pontos Turísticos: %d\n", pontos3);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade3);
    printf("Pontos de Super Poder: *%.2f*\n\n", superPoder3);

    printf("\n##### CARTA 4 #####\n");
    printf("Estado: %c\n", estado4);
    printf("Código: %s\n", codigo4);
    printf("Nome da Cidade: %s\n", cidade4);
    printf("População: %d\n", populacao4);
    printf("Área: %.2f km²\n", area4);
    printf("PIB: %.2f bilhões de reais\n", pib4);
    printf("Número de Pontos Turísticos: %d\n", pontos4);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade4);
    printf("Pontos de Super Poder: *%.2f*\n\n", superPoder4);
    
    printf("\n##### CARTA 5 #####\n");
    printf("Estado: %c\n", estado5);
    printf("Código: %s\n", codigo5);
    printf("Nome da Cidade: %s\n", cidade5);
    printf("População: %d\n", populacao5);
    printf("Área: %.2f km²\n", area5);
    printf("PIB: %.2f bilhões de reais\n", pib5);
    printf("Número de Pontos Turísticos: %d\n", pontos5);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade5);
    printf("Pontos de Super Poder: *%.2f*\n\n", superPoder5);

    printf("\n##### CARTA 6 #####\n");
    printf("Estado: %c\n", estado6);
    printf("Código: %s\n", codigo6);
    printf("Nome da Cidade: %s\n", cidade6);
    printf("População: %d\n", populacao6);
    printf("Área: %.2f km²\n", area6);
    printf("PIB: %.2f bilhões de reais\n", pib6);
    printf("Número de Pontos Turísticos: %d\n", pontos6);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade6);
    printf("Pontos de Super Poder: *%.2f*\n\n", superPoder6);

    //COMPARAÇÃO DAS CARTAS

    printf("##### COMPARAÇÃO DAS CARTAS #####\n"); // APENAS CIDADE 1 E 2 PARA SIMPLIFICAR

        printf("\nPOPULAÇÃO:\n");

        if (populacao1 > populacao2) { 
        printf("%s vence em população!\n", cidade1);
        } else if (populacao2 > populacao1) {
        printf("%s vence em população!\n", cidade2);
        } else {
        printf("Empate em população!\n");
        }

        printf("\nÁREA:\n");

        if (area1 > area2) {
        printf("%s vence em área!\n", cidade1);
        } else if (area2 > area1) {
        printf("%s vence em área!\n", cidade2);
        } else {
        printf("Empate em área!\n");
        }

        printf("\nPIB:\n");

        if (pib1 > pib2) {
        printf("%s vence em PIB!\n", cidade1);
        } else if (pib2 > pib1) {
        printf("%s vence em PIB!\n", cidade2);
        } else {
        printf("Empate em PIB!\n");
        }

    
        printf("\nPONTOS TURÍSTICOS:\n");

        if (pontos1 > pontos2) {
        printf("%s vence em pontos turísticos!\n", cidade1);
        } else if (pontos2 > pontos1) {
        printf("%s vence em pontos turísticos!\n", cidade2);
        } else {
        printf("Empate em pontos turísticos!\n");
        }

        printf("\nDENSIDADE POPULACIONAL:\n");

        if (densidade1 < densidade2) {
        printf("%s vence em densidade populacional!\n", cidade1);
        } else if (densidade2 < densidade1) {
        printf("%s vence em densidade populacional!\n", cidade2);
        } else {
        printf("Empate em densidade populacional!\n");
        }

        printf("\nSUPER PODER:\n");

        if (superPoder1 > superPoder2) {
        printf("%s vence em super poder!\n", cidade1);
        } else if (superPoder2 > superPoder1) {
        printf("%s vence em super poder!\n", cidade2);
        } else {
        printf("Empate em super poder!\n");
        }

    return 0;
}