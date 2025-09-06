
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho_fila 5              //defino que minha fila terá o tamanho de 5 peças

//          **estrutura tetris**
typedef struct {                    
    char nome;                      //nome da peça
    int id;                         //id da peça 
}peca;

typedef struct {                    //setando as peças tetris
    int frente;
    int tras;
    int qtd;
}fila;

//prototipo
void inicializarFila    (fila *f);
int filaCheia           (fila *f);
int filaVazia           (fila *f);
void enfileirar         (fila *f,peca p);
void exibirFila         (fila *f);
peca gerarPeca          (int id);


int main(){
    fila fila;//variavel do tipo fila
    inicializarFila(&fila);
    srand(time(NULL));//gera numero aleatorios

    //inicializa fila com 5 peças
    for (int i = 0; i [tamanho_fila]; i++){
    enfileirar(&fila, gerarPeca(i));   
    }

    int opcao, contador = tamanho_fila;

    do{
        printf("\n=======tetris stack======\n");
        exibirFila(&fila);

        printf("\nopções\n");
        printf("1- jogar peça(dequeue)\n");
        printf("2- inserir nova peça(dequeue)\n");
        printf("3- sair\n");
        scanf("%d" opcao);

        switch (opcao){
            case 1:
            if (!filaCheia(&fila)){
                peca jogada = desenfileirar(&fila);
                printf("\npeça jogada: [%c %d]\n", jogada.nome, jogada.id);                
            }else{
                printf ("\na fila está vazia\n");
            }break;

            case 2:
            if (filaCheia(&fila)){
                enfileirar(&fila, gerarPeca(contar));
                contador++;
                printf("\nnova peça inserida!\n");         
            }else{
                printf("\na fila está cheia!\n");   
            }break;

            case 0:
            printf("\nencerrando o jogo...\n");

            default:
            printf("\nopçao invalida");            
            }
        }while (opcao != 0);
    return 0;
}
// *****funções

void inicializarFila(fila*f){//inicializar fila
    f->frente  = 0;
    f->tras    = -1;
    f->qtd     = 0; 
}

void filaVazia(fila *f){//ve se a fila está vazia
    return f->qtd == 0;//retorna 1 se a fia está vazia
}

void enfileirar(fila *f, peca p){//insere a peça no final da fila
    if (!filaCheia(f)){
        f->tras = (f->tras -1)% tamanho_fila;//faz a fila circular
        f->itens[f->tras] = p;
        f->qtd++;
    }
}
void desenfileirar(fila *f){//remove a peça na frente da fila
    peca p = {'-', -1};
    if (!filaVazia(f)){
        p = f->itens[f->frente];
        f->frente = (f->frente + 1) %tamanho_fila;
        f->qtd--;
    } return p;
}

void exibirFila(fila *f){//exibe a fila
printf("\nfila de peças: ");
if (filaVazia(f)){
    printf("[vazia]");//se estiver vazia escreve [vazia]
}else{
    int i, idx;
    for (i = 0; i < f->qtd; i++){
        idx = (f->frente +i) % tamanho_fila;
        printf("[%c %d]", f->itens[idx].nome, f->itens[idx].id);
    }
}
printf("\n");
}

void gerarPeca(int id){\\gera uma nova peça
    char tipos[] = {'I','O','T','L'};// cria os formatos das peças
    peca nova;//                        gera uma peça nova
    nova.nome = tipos[rand() %4];//     de forma aleatoria
    nova.id=id;
    return nova;
}



