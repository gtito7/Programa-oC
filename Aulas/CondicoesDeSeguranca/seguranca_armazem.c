#include <stdio.h>

int main(){


    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;


    printf("Digite a temperatura do armazém (em °C): ");
    scanf("%f", &temperatura);
    printf("Digite a umidade do armazém: ");
    scanf("%f", &umidade);
    printf("Digite a quantidade de estoque disponível: ");
    scanf("%u", &estoque);

    if(temperatura > 30){
        printf("Alerta: A temperatura está muito alta!\n");
    } else {
        printf("A temperatura está dentro do limite seguro.\n");
    }

    if(umidade > 50){
        printf("Alerta: A umidade está elevada!\n");
    } else {
        printf("A umidade está dentro do limite seguro.\n");
    }

    if(estoque < estoqueMinimo){
        printf("Alerta: O estoque está baixo!\n");
    } else {
        printf("O estoque está no nível adequado.\n");
    }   

}