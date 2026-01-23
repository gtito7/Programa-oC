#include <stdio.h>

int main(){


    // Variaveis de Produto

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";
 

    // Variaveis de Estoque

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA = estoqueA * valorA;
    double valorTotalB = estoqueB * valorB;
    double valorTotalEstoque = valorTotalA + valorTotalB;

    int resultadoA, resultadoB;

    // Variaveis de Temperatura

    float temperaturaC = 30.0;

    // Exibindo Informacoes do Estoque

    printf("#### Inventario de Estoque ####\n\n");
    printf("Produto: %s\n", produtoA);
    printf("Estoque Atual: %u unidades\n", estoqueA);
    printf("Valor Unitario: R$ %.2f\n", valorA);
    printf("Valor Total do Produto: R$ %.2f\n", valorTotalA);

    // Comparação com valor mínimo de estoque

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque mínimo: %d\n", produtoA, resultadoA);
  
             if (estoqueA < estoqueMinimoA) { // Condicional para alerta de estoque minimo
             printf("Alerta: Estoque abaixo do minimo recomendado (%u unidades)\n", estoqueMinimoA);
              }

    printf("\n");
    printf("Produto: %s\n", produtoB);
    printf("Estoque Atual: %u unidades\n", estoqueB);
    printf("Valor Unitario: R$ %.2f\n", valorB);
    printf("Valor Total do Produto: R$ %.2f\n", valorTotalB);

    printf("O produto %s tem estoque mínimo: %d\n", produtoB, resultadoB);

              if (estoqueB < estoqueMinimoB) { // Condicional para alerta de estoque minimo
            printf("Alerta: Estoque abaixo do minimo recomendado (%u unidades)\n", estoqueMinimoB);
             } else {
            printf("Estoque dentro do recomendado (%u unidades)\n", estoqueMinimoB);
             }

    printf("\n");
    printf("Valor Total do Estoque: R$ %.2f\n\n", valorTotalEstoque);

             if (temperaturaC > 35.0) { // Condicional para alerta de temperatura
             printf("Alerta: Temperatura acima do recomendado para armazenamento (%.2f °C)\n\n", temperaturaC);
              } else {
             printf("Temperatura de armazenamento dentro do recomendado (%.2f °C)\n\n", temperaturaC);
              }

    // Comparação entre os valores totais dos produtos

    printf("#### Comparacoes entre Produtos ####\n\n");
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %d\n", (estoqueA * valorA), (estoqueB * valorB), (estoqueA * valorA) > (estoqueB * valorB));


    return 0;


}