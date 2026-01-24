#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float media;

    printf("### Programa de Cálculo de Médias ###\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3; // Conversão explícita para float
    printf("A média das notas é: %.1f\n", media);

    printf("Conceito do aluno: ");

    if (media >= 9.0){
        printf("Conceito A\n");
    } else if (media >= 8.0){
        printf("Conceito B\n");
    } else if (media >= 7.0){
        printf("Conceito C\n");
    } else if (media <= 6.0){
        printf("Aluno Reprovado!\n");
    }

    return 0;
}