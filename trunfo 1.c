#include <stdio.h>

int main() {

    // Variáveis da primeira carta
    char estado1;
    char codigo1[4]; 
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1, DensPopulacional1, PIBperCapta1, SuperPoder1;
    int pontos_turisticos1;

    // Variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2, DensPopulacional2,PIBperCapta2, SuperPoder2;
    int pontos_turisticos2;

    // entrada da primeira carta
    printf("Cadastro da carta 1:\n");    
    printf("Estado (A-H): ");                           //estado
    scanf(" %c", &estado1);                         
    printf("Código da carta EX(A01): ");
    scanf("%s", codigo1);                               //codigo
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);                          //cidade
    printf("Número da população: ");
    scanf("%d", &populacao1);                           //população
    printf("Área (em km²) da cidade: ");
    scanf("%f", &area1);                                //area
    printf("PIB da cidade (Bilhões de reais): ");
    scanf("%f", &pib1);                                 //pib
    printf("Pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);                   //pontos_turisticos

    // Entrada de dados carta 2
    printf("\nCadastro da carta 2:\n");    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);                             //estado
    printf("Código da carta EX(A01): ");
    scanf("%s", codigo2);                               //codigo
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);                          //cidade
    printf("Número da população: ");
    scanf("%d", &populacao2);                           //população
    printf("Área (em km²) da cidade: ");
    scanf("%f", &area2);                                //area
    printf("PIB da cidade (Bilhões de reais): ");
    scanf("%f", &pib2);                                 //pib
    printf("Pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);                   //pontos turisticos

    //menu interativo
    int opcao;
    do{ printf("** MENU **");
        printf("1 - Nome das Cidades\n");
        printf("2 - População\n");
        printf("3 - Àrea\n");
        printf("4 - PIB\n");
        printf("5 - Pontos Turisticos\n");
        printf("6 - Densidade Demografica\n");
        printf("0 - sair\n");
        printf("escolha um atributo para comparar: \n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Comparação por Nome das cidades\n");
                printf("carta 1: %s\n", cidade1);
                printf("carta 2: %s\n", cidade2);
                break;
        
            case 2:
                printf("comparação por população:\n");
                printf("carta 1 (%s): %lu habitantes\n", cidade1, populacao1);
                printf("carta 2 (%s): %lu habitantes\n", cidade2, populacao2);
                if (populacao1 > populacao2)
                    printf("carta a vence!\n");
                else if (populacao1 < populacao2)
                    printf("carta 2 vence!\n");
                else   
                    printf("empate!\n");
                break;

            case 3:
                printf("comparação por Àrea:\n");
                printf("carta 1 (%s): %.2f km\n", cidade1, area1);
                printf("carta 2 (%s): %.2f km\n", cidade2, area2);
                if (area1 > area2)
                    printf("carta 1 vence!\n");
                else if (area1 < area2)
                    printf("empate\n");
                break;
            
            case 4:
                printf("Comparação PIB:\n");
                printf("carta 1 (%s): %.2f \n", cidade1, pib1);
                printf("carta 2 (%s): %.2f \n", cidade2, pib2);
                if (pib1 > pib2)
                    printf("carta 1 vence!\n");
                else if (pib1 < pib2)
                    printf("carta 2 vence!\n");
                else 
                    printf("Empate!\n");
                break;

            case 5:
                printf("comparação por pontos turisticos:\n");
                printf("carta 1 (%s): %d pontos turisticos\n", cidade1, pontos_turisticos1);
                printf("carta 2 (%s): %d pontos turisticos\n", cidade2, pontos_turisticos2);
                if (pontos_turisticos1 > pontos_turisticos2);
                    printf("carta 1 vence!\n");
                else if (pontos_turisticos1 < pontos_turisticos2)
                    printf("carta 2 vence!\n");
                else
                    printf("Empate!\n");
                break;
            case 6:
                printf("Comparação por densidade demografica:\n");
                printf("carta 1 (%s): %.2f habitantes/km\n", cidade1, DensPopulacional1);
                printf("carta 1 (%s): %.2f habitantes/km\n", cidade1, DensPopulacional1);
                if (DensPopulacional1 < DensPopulacional2)
                    printf("carta 1 vence!\n");
                else if(DensPopulacional1 < DensPopulacional2);
                    printf("carta 2 vence!\n");
                else   
                    printf("empate!\n");
                break;
            
            case 0:
                printf("saindo do programa. até mais!\n");
                break;
            default:
                printf("opção invalida! tente novamente.\n")
        }
    }while (opcao!= 0);

    return 0;
}
     
    

    //codigos anteriores
    /* Exibição de dados carta 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1); 
    printf("Nome da cidade: %s\n", cidade1); 
    printf("População: %d\n", populacao1);
    printf("Área da cidade: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    // Exibição de dados carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2); 
    printf("Nome da cidade: %s\n", cidade2); 
    printf("População: %d\n", populacao2);
    printf("Área da cidade: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    //calculos carta1
    DensPopulacional1 = populacao1 / area1;
    PIBperCapta1 = pib1 / populacao1;
    SuperPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + PIBperCapta1;
    //calculos carta2
    DensPopulacional2 = populacao2 / area1;
    PIBperCapta2 = pib2 / populacao2;
    SuperPoder2 = populacao2+ area2 + pib2 + pontos_turisticos2 + PIBperCapta2;   
     //Comparaçao
    printf ("Comparando as cartas \n");
    printf ("população: \n");               //população
        if   (populacao1 > populacao2){
            printf ("carta 1 vence \n");
        }else{
            printf ("carta 2 vence \n");
        }
    printf ("area: \n");                    //area
        if  (area1 > area2){
            printf ("carta 1 vence \n");
        }else{
            printf ("carta 2 vence \n");
        }
    printf ("PIB: /n");                     //pib
        if (pib1 > pib2){
            printf ("carta 1 vence \n");
        }else{
            printf ("carta 2 vence \n");
        }
    printf ("Pontos Turisticos: \n");       //pontos turisticos
        if (pontos_turisticos1 > pontos_turisticos2){
            printf("carta 1 vence \n");
        }else{
            printf("carta 2 vence \n");
        }
    printf ("Densidade Populacional: \n");   //Densidade Populacioal
        if (DensPopulacional1 < DensPopulacional2){
            printf ("carta 1 vence \n");
        }else{
            printf ("carta 2 vence \n");
        }
    printf ("Super Poder: \n");             //Super Poder
        if (SuperPoder1 > SuperPoder2){
            printf("carta 1 vence \n");
        }else{
            printf ("carta 2 vence \n");
        }


    return 0;*/
