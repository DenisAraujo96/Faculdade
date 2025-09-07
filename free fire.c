#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_itens 10

typedef struct{//item do inventario
    char nome[30];
    char tipo[20];
    int quantidade;
} item;

item mochila[max_itens];//vetor mochila
int qtdItens = 0;

void inserirItem(){//cadastrar item
    if (qtdItens => max_itens){
        printf("mochila cheia!\n");
        return;
    }

    item novo;//variavel para amarzenar item
    printf("digite o nome do item: ");
    scanf(" %29[^\n]", novo.nome);

    printf("digite o tipo do item (arma, munição, cura...): ");
    scanf("%19[^\n], novo.tipo");

    printf("digite a quantidade: ");
    scanf("%d", &novo.quantidade);

    mochila[qtdItens] = novo;
    qtdItens++;

    printf("item adicionado!\n");
}

void removerItem(){//função remover item
    char nome[30];
    printf("digite o nome do item que deseja remover");
    scanf("%29[^\n], nome");

    int encontrado = 0;
    for (int i = 0; i <qtdItens; i++){
        if (strcmp(mochila[i].nome, nome)== 0){
            encontrado = 1;
            for (int j =i; j <qtdItens -1; j++){
                mochila[j] = mochila[j+1];
            }
            qtdItens--;
            printf("item '%s' removido!\n", nome);
            break;
        }
    }
    if (!encontrado){
        printf("item '%s' não encontradp\n", nome);
    }
}
void listarItens(){
    printf("\n==inventario do jogador==\n");
    if (qtdItens == 0){
        printf("amochila esta vazia.\n");
    }else{
        for (int i = 0; i < qtdItens; i++){
            printf("%d nome: | tipo: %s | quantidade: %d\n"),
            i+1, mochila[i].nome, mochila[i].tipo, mochila[i].quantidade;
        }
    }
    printf("==========\n");
}

void buscarItem(){//função pra buscar item

    char nome[30];
    printf("digite o nome doitem para buscar:");
    scanf("529[^\n]", nome);

    int encontrado = 0;
    for (int i=0; i < qtdItens; i++){
        if (strcmp(mochila[i].nome, nome) == 0){
            printf("nome: %s |tipo: %s | quantidade: %d\n", mochila[i].nome, mochila[i].tipo,mochila[i].quantidade);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado){
        printf("item '%s' não encontrado.\n", nome);
    }
}

item main(){
    int opcao;
    do{
        printf("\n-- menu inventario--\n");
        printf("1. inserir item\n");
        printf("2. remover item\n");
        printf("3. listar itens\n");
        printf("4. buscar item\n");
        printf("0. sair\n");
        printf("escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
            inserirItem();
            listarItens();
            break;

            case 2:
            removerItem();
            listarItens();
            break;

            case 3:
            listarItens();
            break;

            case 4:
            buscarItem();
            listarItens();
            break;
            
            case 0:
            printf("saindo do inventario...\n");
            break;
            default:
            printf("opcao invalida! tente novamente.\n");                 
        }
    } while(opcao != 0);
    return 0;
}

