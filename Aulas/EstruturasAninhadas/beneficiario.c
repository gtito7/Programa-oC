#include <stdio.h>

int main(){

    int idade;
    float renda;
    int dependentes;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);
    printf("Digite o número de dependentes: ");
    scanf("%d", &dependentes);

    if (idade <= 18 && idade >= 65)
    { 
        if (renda <= 3000.00)
        {
            if (dependentes >= 2)
            {
                printf("Você é elegível para o benefício!\n");
            } else {
                printf("Você não é elegível para o benefício devido ao número de dependentes.\n");
            }
        } else {
            printf("Você não é elegível para o benefício devido à renda.\n");
        }
    } else {
        printf("Você não atende aos critérios de idade.\n");
    }
}