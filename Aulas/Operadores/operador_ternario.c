#include <stdio.h>

int main(){

    int idade = 16;
    int resultado;

    resultado = idade >= 18 ? 1 : 0;

    if(resultado == 1){
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }

    int temperatura = 30;
    int resultadoTemperatura;

     resultadoTemperatura = temperatura >= 30 ? 1 : 0;

     if (resultadoTemperatura == 1){
        printf("Dia quente\n");
     } else {
        printf("Dia frio\n");
     }


 
   int numero1 = 40, numero2 = 20;
   int maior;

   numero1 > numero2 ? (maior = numero1) : (maior = numero2);

   /* if (numero1 > numero2) {
        maior = numero1;
        printf("O maior número é: %d\n", maior);
   } else {
        maior = numero2;
        printf("O maior número é: %d\n", maior);
   } */

   printf("O maior número é: %d\n", maior);

   return 0;
}
