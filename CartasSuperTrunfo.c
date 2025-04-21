#include <stdio.h>
#include <string.h>

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

    // Cálculos automáticos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Menu interativo
    int opcao, novaOpcao;
    printf("\nEscolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super-Poder\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    printf("\n(%s) %s vs (%s) %s:\n", codigo1, nomeCidade1, codigo2, nomeCidade2);
    printf("\nComparando %s (%s) com %s (%s):\n", nomeCidade1, estado1, nomeCidade2, estado2);

    switch (opcao) {
        case 1:
            printf("Populacao: (%s) %lu vs (%s) %lu\n", codigo1, populacao1, codigo2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 2:
            printf("Area: (%s) %.2f km2 vs (%s) %.2f km2\n", codigo1, area1, codigo2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 3:
            printf("PIB: (%s) %.2f bilhoes vs (%s) %.2f bilhoes\n", codigo1, pib1, codigo2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 4:
            printf("Pontos Turisticos: (%s) %d vs (%s) %d\n", codigo1, pontosTuristicos1, codigo2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 5:
            printf("Densidade Demografica: (%s) %.4f hab/km2 vs (%s) %.4f hab/km2\n", codigo1, densidade1, codigo2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 6:
            printf("PIB per Capita: (%s) %.4f R$ vs (%s) %.4f R$\n", codigo1, pibPerCapita1, codigo2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 7:
            printf("Super-Poder: (%s) %.4f vs (%s) %.4f\n", codigo1, superPoder1, codigo2, superPoder2);
            if (superPoder1 > superPoder2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (superPoder2 > superPoder1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        default:
            printf("Opcao invalida. Tente novamente com um número de 1 a 7.\n");
            return 0;
    }

    // Nova escolha 
    printf("\nEscolha outro atributo: ");
    scanf("%d", &novaOpcao);

    if (novaOpcao == opcao) {
        printf("\nVoce escolheu o mesmo atributo.\nPrograma finalizado.\n\n");
    } else {
        // Exibe os dados da segunda comparação
        printf("\n(%s) %s vs (%s) %s:\n\n", codigo1, nomeCidade1, codigo2, nomeCidade2);
        //printf("\nSegunda comparacao:\n\n");
        opcao = novaOpcao;
        // Executa a comparação novamente
        switch (opcao) {
            case 1:
                printf("Populacao: (%s) %lu vs (%s) %lu\n", codigo1, populacao1, codigo2, populacao2);
                if (populacao1 > populacao2)
                    printf("Resultado: %s venceu!\n", nomeCidade1);
                else if (populacao2 > populacao1)
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                else
                    printf("Resultado: Empate!\n");
                break;
            case 2:
                printf("Area: (%s) %.2f km2 vs (%s) %.2f km2\n", codigo1, area1, codigo2, area2);
                if (area1 > area2)
                    printf("Resultado: %s venceu!\n", nomeCidade1);
                else if (area2 > area1)
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                else
                    printf("Resultado: Empate!\n");
                break;
            case 3:
                printf("PIB: (%s) %.2f bilhoes vs (%s) %.2f bilhoes\n", codigo1, pib1, codigo2, pib2);
                if (pib1 > pib2)
                    printf("Resultado: %s venceu!\n", nomeCidade1);
                else if (pib2 > pib1)
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                else
                    printf("Resultado: Empate!\n");
                break;
            case 4:
                printf("Pontos Turisticos: (%s) %d vs (%s) %d\n", codigo1, pontosTuristicos1, codigo2, pontosTuristicos2);
                if (pontosTuristicos1 > pontosTuristicos2)
                    printf("Resultado: %s venceu!\n", nomeCidade1);
                else if (pontosTuristicos2 > pontosTuristicos1)
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                else
                    printf("Resultado: Empate!\n");
                break;
            case 5:
                printf("Densidade Demografica: (%s) %.4f hab/km2 vs (%s) %.4f hab/km2\n", codigo1, densidade1, codigo2, densidade2);
                if (densidade1 < densidade2)
                    printf("Resultado: %s venceu!\n", nomeCidade1);
                else if (densidade2 < densidade1)
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                else
                    printf("Resultado: Empate!\n");
                break;
            case 6:
                printf("PIB per Capita: (%s) R$ %.4f vs (%s) R$ %.4f \n", codigo1, pibPerCapita1, codigo2, pibPerCapita2);
                if (pibPerCapita1 > pibPerCapita2)
                    printf("Resultado: %s venceu!\n", nomeCidade1);
                else if (pibPerCapita2 > pibPerCapita1)
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                else
                    printf("Resultado: Empate!\n");
                break;
            case 7:
                printf("Super-Poder: (%s) %.4f vs (%s) %.4f\n", codigo1, superPoder1, codigo2, superPoder2);
                if (superPoder1 > superPoder2)
                    printf("Resultado: %s venceu!\n", nomeCidade1);
                else if (superPoder2 > superPoder1)
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                else
                    printf("Resultado: Empate!\n");
                break;
            default:
                printf("Opcao invalida. Programa encerrado.\n");
        }
    }

    return 0;
}
