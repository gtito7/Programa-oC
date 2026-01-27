#include <stdio.h>

int main(){

int index;

char * nomesAlunos [3][3] = {
    {"Antonio", "Pt: 38", "Mat: 98"},
    {"Jose", "Pt: 68", "Mat: 65"},
    {"Augusto", "Pt: 98", "Mat: 35"}
};

printf("Digite o numero do Aluno para ver as notas: \n");
printf("Antonio, digite 0\n");
printf("Jose, digite 1\n");
printf("Augusto, digite 2\n");

scanf("%d", &index);

printf("As notas do %s são: %s e %s.\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);

    return 0;
}