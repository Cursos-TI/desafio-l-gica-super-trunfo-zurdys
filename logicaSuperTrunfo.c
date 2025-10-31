#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main(){
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigoCarta1[3], codigoCarta2[3], cidade1[30], cidade2[30];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2, resPopulacao, resArea, resPib, resPontosTuristicos, resDensidadePopulacional, resPibPerCapita, resSuperPoder, opcao1, opcao2;
    float area1, area2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, somaAtributos1, somaAtributos2;


    // Área para entrada de dados
    printf("------------- Carta 1 ----------------\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código da carta: ");
    scanf("%s", codigoCarta1);

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n------------- Carta 2 ----------------\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf("%s", codigoCarta2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional1 = (float) populacao1 / area1;
    densidadePopulacional2 = (float) populacao2 / area2;

    printf("\n---------------- Escolha o atributo ----------------\n");
    printf("1. Nome do país\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao1);

     printf("\n---------------- Escolha o atributo ----------------\n");
    printf("1. Nome do país\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("Não é possível escolher a mesma opção de atributos.\n");
        return 0;
    }

    switch (opcao1)
    {
    case 1:
        printf("Carta 1: %s\n", cidade1);
        printf("Carta 2: %s\n", cidade2);
        break;
    case 2:
        somaAtributos1 += populacao1; 
        somaAtributos2 += populacao2;
        if (populacao1 > populacao2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre população\n");
            printf("População %s: %d - População %s: %d\n", cidade1, populacao1, cidade2, populacao2);
            printf("A carta 1 venceu!\n");
        } else if (populacao1 < populacao2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre população\n");
            printf("População %s: %d - População %s: %d\n", cidade1, populacao1, cidade2, populacao2);
            printf("A carta 2 venceu!\n");
        } else {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre população\n");
            printf("População %s: %d - População %s: %d\n", cidade1, populacao1, cidade2, populacao2);
            printf("Empatou\n");
        }
        break;
    case 3:
        somaAtributos1 += area1;
        somaAtributos2 += area2;
        if (area1 > area2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre área\n");
            printf("Área %s: %.2f - Área %s: %.2f\n", cidade1, area1, cidade2, area2);
            printf("A carta 1 venceu!\n");
        } else if (area1 < area2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre área\n");
            printf("Área %s: %.2f - Área %s: %.2f\n", cidade1, area1, cidade2, area2);
            printf("A carta 2 venceu!\n");
        } else {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre área\n");
            printf("Área %s: %.2f - Área %s: %.2f\n", cidade1, area1, cidade2, area2);
            printf("Empatou\n");
        }
        break;
    case 4:
        somaAtributos1 += pib1;
        somaAtributos2 += pib2;
        if (pib1 > pib2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre PIB2\n");
            printf("PIB %s: %.2f - PIB %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            printf("A carta 1 venceu!\n");
        } else if (pib1 < pib2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre PIB\n");
            printf("PIB %s: %.2f - PIB %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            printf("A carta 2 venceu!\n");
        } else {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre PIB\n");
            printf("PIB %s: %.2f - PIB %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            printf("Empatou\n");
        }
        break;        
    case 5:
        somaAtributos1 += pontosTuristicos1;
        somaAtributos2 += pontosTuristicos2;
        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre Pontos Turísticos\n");
            printf("Pontos Turísticos %s: %d - Pontos Turísticos %s: %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
            printf("A carta 1 venceu!\n");
        } else if (pontosTuristicos1 < pontosTuristicos2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre Pontos Turísticos\n");
            printf("Pontos Turísticos %s: %d - Pontos Turísticos %s: %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
            printf("A carta 2 venceu!\n");
        } else {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre Pontos Turísticos\n");
            printf("Pontos Turísticos %s: %d - Pontos Turísticos %s: %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
            printf("Empatou\n");
        }
        break;
    case 6:
        somaAtributos1 += densidadePopulacional1;
        somaAtributos2 += densidadePopulacional2;
        if (densidadePopulacional1 < densidadePopulacional2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre Densidade demográfica\n");
            printf("Densidade demográfica %s: %.2f - Densidade demográfica %s: %.2f\n", cidade1, densidadePopulacional1, cidade2, densidadePopulacional2);
            printf("A carta 1 venceu!\n");
        } else if (densidadePopulacional1 > densidadePopulacional2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre Densidade demográfica\n");
            printf("Densidade demográfica %s: %.2f - Densidade demográfica %s: %.2f\n", cidade1, densidadePopulacional1, cidade2, densidadePopulacional2);
            printf("A carta 2 venceu!\n");
        } else {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre Densidade demográfica\n");
            printf("Densidade demográfica %s: %.2f - Densidade demográfica %s: %.2f\n", cidade1, densidadePopulacional1, cidade2, densidadePopulacional2);
            printf("Empatou\n");
        }
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    switch (opcao2)
    {
    case 1:
        printf("Carta 1: %s\n", cidade1);
        printf("Carta 2: %s\n", cidade2);
        break;
    case 2:
        somaAtributos1 += populacao1; 
        somaAtributos2 += populacao2;
        if (populacao1 > populacao2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre população\n");
            printf("População %s: %d - População %s: %d\n", cidade1, populacao1, cidade2, populacao2);
            printf("A carta 1 venceu!\n");
        } else if (populacao1 < populacao2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre população\n");
            printf("População %s: %d - População %s: %d\n", cidade1, populacao1, cidade2, populacao2);
            printf("A carta 2 venceu!\n");
        } else {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre população\n");
            printf("População %s: %d - População %s: %d\n", cidade1, populacao1, cidade2, populacao2);
            printf("Empatou\n");
        }
        break;
    case 3:
        somaAtributos1 += area1; 
        somaAtributos2 += area2;
        if (area1 > area2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre área\n");
            printf("Área %s: %.2f - Área %s: %.2f\n", cidade1, area1, cidade2, area2);
            printf("A carta 1 venceu!\n");
        } else if (area1 < area2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre área\n");
            printf("Área %s: %.2f - Área %s: %.2f\n", cidade1, area1, cidade2, area2);
            printf("A carta 2 venceu!\n");
        } else {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre área\n");
            printf("Área %s: %.2f - Área %s: %.2f\n", cidade1, area1, cidade2, area2);
            printf("Empatou\n");
        }
        break;
    case 4:
        somaAtributos1 += pib1; 
        somaAtributos2 += pib2;
        if (pib1 > pib2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre PIB2\n");
            printf("PIB %s: %.2f - PIB %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            printf("A carta 1 venceu!\n");
        } else if (pib1 < pib2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre PIB\n");
            printf("PIB %s: %.2f - PIB %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            printf("A carta 2 venceu!\n");
        } else {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre PIB\n");
            printf("PIB %s: %.2f - PIB %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            printf("Empatou\n");
        }
        break;        
    case 5:
        somaAtributos1 += pontosTuristicos1; 
        somaAtributos2 += pontosTuristicos2;
        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre Pontos Turísticos\n");
            printf("Pontos Turísticos %s: %d - Pontos Turísticos %s: %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
            printf("A carta 1 venceu!\n");
        } else if (pontosTuristicos1 < pontosTuristicos2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre Pontos Turísticos\n");
            printf("Pontos Turísticos %s: %d - Pontos Turísticos %s: %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
            printf("A carta 2 venceu!\n");
        } else {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre Pontos Turísticos\n");
            printf("Pontos Turísticos %s: %d - Pontos Turísticos %s: %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
            printf("Empatou\n");
        }
        break;
    case 6:
        somaAtributos1 += densidadePopulacional1; 
        somaAtributos2 += densidadePopulacional2;
        if (densidadePopulacional1 < densidadePopulacional2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre Densidade demográfica\n");
            printf("Densidade demográfica %s: %.2f - Densidade demográfica %s: %.2f\n", cidade1, densidadePopulacional1, cidade2, densidadePopulacional2);
            printf("A carta 1 venceu!\n");
        } else if (densidadePopulacional1 > densidadePopulacional2) {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre Densidade demográfica\n");
            printf("Densidade demográfica %s: %.2f - Densidade demográfica %s: %.2f\n", cidade1, densidadePopulacional1, cidade2, densidadePopulacional2);
            printf("A carta 2 venceu!\n");
        } else {
            printf("%s - %s\n", cidade1, cidade2);
            printf("Comparação entre Densidade demográfica\n");
            printf("Densidade demográfica %s: %.2f - Densidade demográfica %s: %.2f\n", cidade1, densidadePopulacional1, cidade2, densidadePopulacional2);
            printf("Empatou\n");
        }
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
    
    somaAtributos1 > somaAtributos2 ? printf("A carta vencedora com mais atributoes é a Carta 1!\n") : printf("A carta vencedora com mais atributoes é a Carta 2!\n");
return 0;
}
