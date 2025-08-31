#include <stdio.h>
#include <string.h>

//--CONSTATES GLOBAIS--
#define TAM_STRING 50
#define QTD_TERRITORIOS 5

struct território {
    char nome[TAM_STRING];
    char corExercito[TAM_STRING];
    int numeroTropas;

};


int main() {
    struct território territorios [QTD_TERRITORIOS];
    printf("=== cadastro inicial dos territorios===\n");

    for (int i = 0; i < QTD_TERRITORIOS; i++){
        printf("\n--territorio %d --\n", i+1);

        //          lendo o nome
        printf("nome: ");
        fgets (territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';

        //          lendo a cor do exercito
        printf("cor do exercito: ");
        fgets (territorios[i].corExercito, sizeof(territorios[i].corExercito), stdin);
        territorios[i].corExercito[strcspn(territorios[i].corExercito, "\n")] = '\0';

        //          lendo numero de tropas
        printf("numero de tropas: ");
        scanf("%d", &territorios[i].numeroTropas);
        getchar();

        //          exibindo o estado atual do mapa
        printf("\n=== estado atual do mapa ===\n");
        for (int i = 0; i <QTD_TERRITORIOS; i++){
            printf("\nTerritório %d\n", i + 1);
            printf(" nome: %s\n", territorios[i].nome);
            printf(" cor do execito: %s\n", territorios[i].corExercito);
            printf(" Número de tropas: %d\n", territorios[i].numeroTropas);
        }


    }



    return 0;
}
