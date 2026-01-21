#include <stdio.h>

int main(){


// Condição simples
    int numero1, numero2;
    numero1 = 10;
    numero2 = 5;
    int idade1 = 25, idade2 = 30;

    if (idade1 != idade2) {
        printf("As idades são diferentes.\n");
    }

    if (numero1 > numero2) {
        printf("Número 1 é maior que Número 2\n");
    }   

    int idade = 18;
    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    }
    

// Condição composta
    int numero = 10, resultado;

    resultado = numero % 2;

    printf("A variável resultado é: %d\n", resultado);

    if (resultado % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }


// Condição encadeada
    int nota = 85;
    if (nota >= 90) {
        printf("Conceito A\n");
    } else if (nota >= 80) {
        printf("Conceito B\n");
    } else if (nota >= 70) {
        printf("Conceito C\n");
    } else if (nota >= 60) {
        printf("Conceito D\n");
    } else {
        printf("Conceito F\n");
    }

    return 0;

}