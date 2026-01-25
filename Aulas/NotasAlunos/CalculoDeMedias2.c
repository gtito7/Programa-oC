#include <stdio.h>

int main() {
  int opcao;
  float nota1, nota2, media;

  // Exibição do menu
  printf("Menu de Gerenciamento de Estudantes\n");
  printf("1. Calcular Média\n");
  printf("2. Determinar Status\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      // Entrada de notas
      printf("Digite a primeira nota: ");
      scanf("%f", &nota1);
      printf("Digite a segunda nota: ");
      scanf("%f", &nota2);
      //Testar condicao se a nota é >=0 e <=10
        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
            printf("Notas válidas.\n");
            media = (nota1 + nota2) / 2;
            printf("A média do estudante é: %.1f\n", media);
        } else {
            printf("Notas inválidas. As notas devem estar entre 0 e 10.\n");
        }
      break;
    case 2:
      // Determinação do status com base na média
      printf("Determinar Status do Estudante\n");
      printf("Digite a média do estudante: ");
      scanf("%f", &media);
      if (media >= 7 ? printf("Status: Aprovado\n") : 
          (media >= 5 ? printf("Status: Recuperação\n") : printf("Status: Reprovado\n")));
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;
}