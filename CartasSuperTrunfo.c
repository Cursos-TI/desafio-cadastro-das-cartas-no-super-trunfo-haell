#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1[3], codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Declaração das variáveis da Carta 2
    char estado2[3], codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada de dados da Carta 1
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (sigla, ex: SP): ");
    scanf("%s", estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (em km): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (sigla, ex: RJ): ");
    scanf("%s", estado2);
    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (em km): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculos para a primeira carta
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // Calculos para a segunda carta
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Comparações e exibição
    printf("\nComparacao de Cartas:\n");

    // População
    printf("\n(Atributo: Populacao):\n");
    printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);
    if (populacao1 > populacao2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);

    // Área
    printf("\n(Atributo: Area):\n");
    printf("Carta 1 - %.2f km\n", area1);
    printf("Carta 2 - %.2f km\n", area2);
    if (area1 > area2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);

    // PIB
    printf("\n(Atributo: PIB):\n");
    printf("Carta 1 - %.2f bilhoes\n", pib1);
    printf("Carta 2 - %.2f bilhoes\n", pib2);
    if (pib1 > pib2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);

    // Pontos Turísticos
    printf("\n(Atributo: Pontos Turisticos):\n");
    printf("Carta 1 - %d\n", pontosTuristicos1);
    printf("Carta 2 - %d\n", pontosTuristicos2);
    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);

    // Densidade Populacional (menor vence)
    printf("\n(Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %.2f hab/km\n", densidade1);
    printf("Carta 2 - %.2f hab/km\n", densidade2);
    if (densidade1 < densidade2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);

    // PIB per Capita
    printf("\n(Atributo: PIB per Capita):\n");
    printf("Carta 1 - %.2f reais\n", pibPerCapita1);
    printf("Carta 2 - %.2f reais\n", pibPerCapita2);
    if (pibPerCapita1 > pibPerCapita2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);

    // Super Poder
    printf("\n(Atributo: Super-Poder):\n");
    printf("Carta 1 - %.2f\n", superPoder1);
    printf("Carta 2 - %.2f\n", superPoder2);
    if (superPoder1 > superPoder2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);

    return 0;
}
