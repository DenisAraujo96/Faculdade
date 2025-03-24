#include <stdio.h>

int main() {
    // Variáveis das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, DensPopulacional1, DensPopulacional2;
    int pontos_turisticos1, pontos_turisticos2;

    // Entradas da primeira carta
    printf("Cadastro da carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da carta EX(A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Número da população: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entradas da segunda carta
    printf("\nCadastro da carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da carta EX(A01): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Número da população: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos automáticos
    DensPopulacional1 = populacao1 / area1;
    DensPopulacional2 = populacao2 / area2;

    int opcao1, opcao2;

    // Escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    scanf("%d", &opcao1);

    // Escolha do segundo atributo
    do {
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        if (opcao1 != 1) printf("1 - População\n");
        if (opcao1 != 2) printf("2 - Área\n");
        if (opcao1 != 3) printf("3 - PIB\n");
        if (opcao1 != 4) printf("4 - Pontos Turísticos\n");
        if (opcao1 != 5) printf("5 - Densidade Demográfica\n");
        scanf("%d", &opcao2);
    } while (opcao1 == opcao2);

    // Comparação dos dois atributos
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    switch (opcao1) {
        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            break;
        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;
        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;
        case 4:
            valor1_carta1 = pontos_turisticos1;
            valor1_carta2 = pontos_turisticos2;
            break;
        case 5:
            valor1_carta1 = DensPopulacional1;
            valor1_carta2 = DensPopulacional2;
            break;
    }

    switch (opcao2) {
        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            break;
        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;
        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;
        case 4:
            valor2_carta1 = pontos_turisticos1;
            valor2_carta2 = pontos_turisticos2;
            break;
        case 5:
            valor2_carta1 = DensPopulacional1;
            valor2_carta2 = DensPopulacional2;
            break;
    }

    // Comparação
    int vitorias_carta1 = 0, vitorias_carta2 = 0;

    // Primeiro atributo
    if (opcao1 == 5) { // Densidade Demográfica
        if (valor1_carta1 < valor1_carta2) vitorias_carta1++;
        else if (valor1_carta1 > valor1_carta2) vitorias_carta2++;
    } else { // Maior é melhor
        if (valor1_carta1 > valor1_carta2) vitorias_carta1++;
        else if (valor1_carta1 < valor1_carta2) vitorias_carta2++;
    }

    // Segundo atributo
    if (opcao2 == 5) { // Densidade Demográfica
        if (valor2_carta1 < valor2_carta2) vitorias_carta1++;
        else if (valor2_carta1 > valor2_carta2) vitorias_carta2++;
    } else { // Maior é melhor
        if (valor2_carta1 > valor2_carta2) vitorias_carta1++;
        else if (valor2_carta1 < valor2_carta2) vitorias_carta2++;
    }

    // Soma dos Atributos
    float soma_carta1 = valor1_carta1 + valor2_carta1;
    float soma_carta2 = valor1_carta2 + valor2_carta2;

    printf("\nResultados:\n");
    printf("Carta 1 (%s): Soma = %.2f\n", cidade1, soma_carta1);
    printf("Carta 2 (%s): Soma = %.2f\n", cidade2, soma_carta2);

    if (soma_carta1 > soma_carta2) {
        printf("Carta 1 vence!\n");
    } else if (soma_carta1 < soma_carta2) {
        printf("Carta 2 vence!\n");
    } else {
        printf("Empate!\n");
    }

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

