#include <stdio.h>

int main() {
    // Características da carta 01
    int area1, pontos_turisticos1;
    float populacao1, pib1;
    char estado1[20], codigo1[20], cidade1[20];
    float pib_percapito1, densidade1;

    // Características da carta 02
    int area2, pontos_turisticos2;
    float populacao2, pib2;
    char estado2[20], codigo2[20], cidade2[20];
    float pib_percapito2, densidade2;

    // Leitura da primeira carta
    printf("Digite o Estado da carta 1: \n");
    scanf("%s", estado1);
    printf("Digite a Cidade: \n");
    scanf("%s", cidade1);
    printf("Código da carta (número entre 01 a 04 e letra entre A a H): \n");
    scanf("%s", codigo1);
    printf("Número de Habitantes: \n");
    scanf("%f", &populacao1);
    printf("Área em km²: \n");
    scanf("%d", &area1);
    printf("Qual o PIB (em reais): \n");
    scanf("%f", &pib1);
    printf("Quantos Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Densidade populacional e PIB per capita da carta 01
    densidade1 = populacao1 / area1;
    pib_percapito1 = pib1 / populacao1;

    // Leitura da segunda carta
    printf("\nDigite o Estado da carta 2: \n");
    scanf("%s", estado2);
    printf("Digite a Cidade: \n");
    scanf("%s", cidade2);
    printf("Código da carta (número entre 01 a 04 e letra entre A a H): \n");
    scanf("%s", codigo2);
    printf("Número de Habitantes: \n");
    scanf("%f", &populacao2);
    printf("Área em km²: \n");
    scanf("%d", &area2);
    printf("Qual o PIB (em reais): \n");
    scanf("%f", &pib2);
    printf("Quantos Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Densidade populacional e PIB per capita da carta 02
    densidade2 = populacao2 / area2;
    pib_percapito2 = pib2 / populacao2;

    // Cartas prontas - exibição
    printf("\n----- Carta 1 -----\n");
    printf("Código: %s\nEstado: %s\nCidade: %s\n", codigo1, estado1, cidade1);
    printf("População: %.2f\nÁrea: %d km²\nPIB: R$ %.2f\n", populacao1, area1, pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.3f hab/km²\nPIB per capita: R$ %.2f\n", densidade1, pib_percapito1);

    printf("\n----- Carta 2 -----\n");
    printf("Código: %s\nEstado: %s\nCidade: %s\n", codigo2, estado2, cidade2);
    printf("População: %.2f\nÁrea: %d km²\nPIB: R$ %.2f\n", populacao2, area2, pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.3f hab/km²\nPIB per capita: R$ %.2f\n", densidade2, pib_percapito2);

    return 0;
}