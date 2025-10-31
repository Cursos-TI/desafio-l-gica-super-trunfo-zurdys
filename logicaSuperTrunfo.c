#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigoCarta1[3], codigoCarta2[3], cidade1[30], cidade2[30];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2, resPopulacao, resArea, resPib, resPontosTuristicos, resDensidadePopulacional, resPibPerCapita, resSuperPoder;
    float area1, area2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;


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
    pibPerCapita1 = (float) populacao1 / pib1;
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) populacao2 / pib2;
    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1;
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2;

    resPopulacao = populacao1 > populacao2;
    resArea = area1 > area2;
    resPib = pib1 > pib2;
    resPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    resDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
    resPibPerCapita = pibPerCapita1 > pibPerCapita2;
    resSuperPoder = superPoder1 > superPoder2;



  //Área para exibição dos dados da cidade
    printf("\n\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\n------------- Comparação das Cartas: ----------------\n");
    printf("População: Carta 1 venceu (%d)\n", resPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", resArea);
    printf("PIB: Carta 1 venceu (%d)\n", resPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resPontosTuristicos);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resDensidadePopulacional);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resSuperPoder);

    printf("\n------------- Comparação de cartas (Atributo: População): ----------------\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 - %s: %d \n", cidade1, populacao1);
    } else {
        printf("Carta 2 - %s: %d \n", cidade2, populacao2);
    }

return 0;
}
