#include <stdio.h>

int main(){

/*
Atribuição Simples (=)
Atribuição com Soma (+=)
Atribuição com Subtração (-=)
Atribuição com Multiplicação (*=)
Atribuição com Divisão (/=)
*/

int numero1 = 10, numero2 =15 , resultado = numero1 + numero2;

// resultado =10; Atribuição Simples

printf("Resultado: %d\n", resultado);

resultado += 20; // Atribuição com Soma
printf("Resultado após += 20: %d\n", resultado);

resultado -= 5; // Atribuição com Subtração
printf("Resultado após -= 5: %d\n", resultado);

resultado *= 3; // Atribuição com Multiplicação
printf("Resultado após *= 3: %d\n", resultado);

resultado /= 2; // Atribuição com Divisão
printf("Resultado após /= 2: %d\n", resultado);

resultado -= numero1; // Atribuição com Subtração usando variável
printf("Resultado após -= numero1: %d\n", resultado);

    return 0;   
}