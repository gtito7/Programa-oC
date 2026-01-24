#include <stdio.h>

int main(){


    int variavel;

    printf("Digite um valor \n");
    scanf("%d", &variavel);

    switch(variavel){
        case 1:
            printf("Voce digitou o valor 1\n");
        break;
        case 2:
            printf("Voce digitou o valor 2\n");
        break;
        case 3:
            printf("Voce digitou o valor 3\n");
        break;
        default:
            printf("Valor não reconhecido\n");
    }
    return 0;




}