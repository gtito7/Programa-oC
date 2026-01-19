#include <stdio.h>

// Exemplos de operadores matemáticos em C
int main() {

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    //operação soma
    soma = numero1 + numero2;
    //operação subtração
    subtracao = numero1 - numero2;
    //operação multiplicação
    multiplicacao = numero1 * numero2;
    //operação divisão
    divisao = numero1 / numero2;

    

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);

    return 0;
}