#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    printf("|COLEÇÃO DE CARTAS|\n");

    printf("\n##### CARTA 1 #####\n");
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

    int menu;

    printf("##### SUPER TRUNFO - CIDADES #####\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Regras\n");
    printf("3 - Sair\n");
    printf("Opção: ");
    scanf("%d", &menu);

    if (menu == 2) {
        printf("\nREGRAS DO JOGO:\n");
        printf("- Escolha uma cidade\n");
        printf("- Escolha um atributo\n");
        printf("- Maior valor vence\n");
        printf("- Para densidade populacional, MENOR valor vence\n");
        return 0;
    }
    else if (menu == 3) {
        printf("Saindo do jogo...\n");
        return 0;
    }
    else if (menu != 1) {
        printf("Opção inválida!\n");
        return 0;
    }

    int jogador, computador, atributo;
    float valorJogador, valorComputador;

    srand(time(0));

    // MENU DE CIDADES 

    printf("\nEscolha sua cidade:\n");
    printf("1 - %s\n", cidade1);
    printf("2 - %s\n", cidade2);
    printf("3 - %s\n", cidade3);
    printf("4 - %s\n", cidade4);
    printf("5 - %s\n", cidade5);
    printf("6 - %s\n", cidade6);
    printf("Opção: ");
    scanf("%d", &jogador);

    computador = rand() % 6 + 1;

    // MENU DE ATRIBUTOS 

    printf("\nEscolha o atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Opção: ");
    scanf("%d", &atributo);

    // VALOR DO JOGADOR

    switch (jogador) {
    case 1:
        switch (atributo) {
            case 1: valorJogador = populacao1; break;
            case 2: valorJogador = area1; break;
            case 3: valorJogador = pib1; break;
            case 4: valorJogador = pontos1; break;
            case 5: valorJogador = densidade1; break;
        }
        break;

    case 2:
        switch (atributo) {
            case 1: valorJogador = populacao2; break;
            case 2: valorJogador = area2; break;
            case 3: valorJogador = pib2; break;
            case 4: valorJogador = pontos2; break;
            case 5: valorJogador = densidade2; break;
        }
        break;

    case 3:
        switch (atributo) {
            case 1: valorJogador = populacao3; break;
            case 2: valorJogador = area3; break;
            case 3: valorJogador = pib3; break;
            case 4: valorJogador = pontos3; break;
            case 5: valorJogador = densidade3; break;
        }
        break;

    case 4:
        switch (atributo) {
            case 1: valorJogador = populacao4; break;
            case 2: valorJogador = area4; break;
            case 3: valorJogador = pib4; break;
            case 4: valorJogador = pontos4; break;
            case 5: valorJogador = densidade4; break;
        }
        break;

    case 5:
        switch (atributo) {
            case 1: valorJogador = populacao5; break;
            case 2: valorJogador = area5; break;
            case 3: valorJogador = pib5; break;
            case 4: valorJogador = pontos5; break;
            case 5: valorJogador = densidade5; break;
        }
        break;

    case 6:
        switch (atributo) {
            case 1: valorJogador = populacao6; break;
            case 2: valorJogador = area6; break;
            case 3: valorJogador = pib6; break;
            case 4: valorJogador = pontos6; break;
            case 5: valorJogador = densidade6; break;
        }
        break;
    }

    // VALOR DO COMPUTADOR

    switch (computador) {
    case 1:
        switch (atributo) {
            case 1: valorComputador = populacao1; break;
            case 2: valorComputador = area1; break;
            case 3: valorComputador = pib1; break;
            case 4: valorComputador = pontos1; break;
            case 5: valorComputador = densidade1; break;
        }
        break;

    case 2:
        switch (atributo) {
            case 1: valorComputador = populacao2; break;
            case 2: valorComputador = area2; break;
            case 3: valorComputador = pib2; break;
            case 4: valorComputador = pontos2; break;
            case 5: valorComputador = densidade2; break;
        }
        break;

    case 3:
        switch (atributo) {
            case 1: valorComputador = populacao3; break;
            case 2: valorComputador = area3; break;
            case 3: valorComputador = pib3; break;
            case 4: valorComputador = pontos3; break;
            case 5: valorComputador = densidade3; break;
        }
        break;

    case 4:
        switch (atributo) {
            case 1: valorComputador = populacao4; break;
            case 2: valorComputador = area4; break;
            case 3: valorComputador = pib4; break;
            case 4: valorComputador = pontos4; break;
            case 5: valorComputador = densidade4; break;
        }
        break;

    case 5:
        switch (atributo) {
            case 1: valorComputador = populacao5; break;
            case 2: valorComputador = area5; break;
            case 3: valorComputador = pib5; break;
            case 4: valorComputador = pontos5; break;
            case 5: valorComputador = densidade5; break;
        }
        break;

    case 6:
        switch (atributo) {
            case 1: valorComputador = populacao6; break;
            case 2: valorComputador = area6; break;
            case 3: valorComputador = pib6; break;
            case 4: valorComputador = pontos6; break;
            case 5: valorComputador = densidade6; break;
        }
        break;
    }

// RESULTADO

printf("\n#### RESULTADO ####\n");

// Cidade do jogador
printf("Sua cidade: ");
if (jogador == 1) printf("%s\n", cidade1);
else if (jogador == 2) printf("%s\n", cidade2);
else if (jogador == 3) printf("%s\n", cidade3);
else if (jogador == 4) printf("%s\n", cidade4);
else if (jogador == 5) printf("%s\n", cidade5);
else printf("%s\n", cidade6);

// Cidade do computador
printf("Cidade do computador: ");
if (computador == 1) printf("%s\n", cidade1);
else if (computador == 2) printf("%s\n", cidade2);
else if (computador == 3) printf("%s\n", cidade3);
else if (computador == 4) printf("%s\n", cidade4);
else if (computador == 5) printf("%s\n", cidade5);
else printf("%s\n", cidade6);

// Atributo escolhido
printf("Atributo comparado: ");
if (atributo == 1) printf("População\n");
else if (atributo == 2) printf("Área\n");
else if (atributo == 3) printf("PIB\n");
else if (atributo == 4) printf("Pontos Turísticos\n");
else printf("Densidade Populacional\n");

// Valores
printf("\nSeu valor: %.2f\n", valorJogador);
printf("Valor do computador: %.2f\n", valorComputador);

// Vencedor
if (atributo == 5) {  // densidade: menor vence
    if (valorJogador < valorComputador)
        printf("\n### VOCÊ VENCEU ###\n");
    else if (valorJogador > valorComputador)
        printf("\n### COMPUTADOR VENCEU ###\n");
    else
        printf("\n### EMPATE ###\n");
} else {
    if (valorJogador > valorComputador)
        printf("\n### VOCÊ VENCEU ###\n");
    else if (valorJogador < valorComputador)
        printf("\n### COMPUTADOR VENCEU ###\n");
    else
        printf("\n### EMPATE ###\n");
}

    return 0;
}