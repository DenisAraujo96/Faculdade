#include <stdio.h>

int main(){
    int index;

    char *nomesAlunos[3][3] = {
        {"aluno 1", "pt: 30", "mat: 90"},
        {"aluno 2", "pt: 60", "mat: 60"},
        {"aluno 2", "pt: 90", "mat: 30"}
    };
    printf("digite o numero do aluno que queira ver as notas... \n");
    printf("aluno 1, digite 0\n");
    printf("aluno 2, digite 1\n");
    printf("aluno 3, digite 2\n");

    scanf("%d", &index);

    printf("as nota do %s são: %s, %s... \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2] );
    return 0;
}

