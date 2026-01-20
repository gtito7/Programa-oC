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

    return 0;
}