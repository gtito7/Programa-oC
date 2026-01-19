#include <stdio.h>

int main (){

// Operadores de Incremento e Decremento
int numero1 = 1, resultado;
// numero1 += 1; // Incremento
printf("Antes de incremento: %d\n", numero1);
// Pós-incremento: resultado = numero1++;
// Pré-incremento: resultado = ++numero1;

numero1++; // Incremento
printf("Após incremento: %d\n", numero1);

numero1--; // Decremento
// numero1 -= 1; // Decremento
printf("Após decremento: %d\n", numero1);
resultado = numero1++; // Pós-incremento
printf("Resultado do pós-incremento: %d\n", resultado);
resultado = ++numero1; // Pré-incremento
printf("Resultado do pré-incremento: %d\n", resultado);
    resultado = numero1--; // Pós-decremento
    printf("Resultado do pós-decremento: %d\n", resultado);
    resultado = --numero1; // Pré-decremento
    printf("Resultado do pré-decremento: %d\n", resultado);

    return 0;
}