#include <stdio.h>


int main (){



// Operador Lógico E (&&)
    int a = 5;
    int b = 10;
    int c = 15;

    if (a < b && b < c) {
        printf("Ambas as condições são verdadeiras: a < b e b < c\n");
    } else {
        printf("Pelo menos uma das condições é falsa.\n");
    }

// Operador Lógico OU (||)
    int x = 20;
    int y = 25;
    if (x > y || y < 30) {
        printf("Pelo menos uma das condições é verdadeira: x > y ou y < 30\n");
    } else {
        printf("Ambas as condições são falsas.\n");
    }

// Operador Lógico NÃO (!)
    int z = 5;
    if (!(z > 10)) {
        printf("A condição z > 10 é falsa, então ! (z > 10) é verdadeira.\n");
    } else {
        printf("A condição z > 10 é verdadeira.\n");
    }

// Decisão Encadeada com Operadores Lógicos
    int idade = 12;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade >= 18 && idade < 65) {
        printf("Você é um adulto em idade ativa.\n");
    } else if (idade >= 65) {
        printf("Você é um idoso.\n");
    } else {
        printf("Você é menor de idade.\n");
    }

    return 0;


}