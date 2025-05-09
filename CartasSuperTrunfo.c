#include <stdio.h>

int main (){
    //Caracteristicas da carta 01 
    int populacao1;
    int pontos_turisticos1;
    float area1;
    float pib1;
    char estado1[20];
    char codigo1[20];
    char cidade1[20];
    //Caracteristicas da carta 02
    int populacao2;
    int pontos_turisticos2;
    float area2;
    float pib2;
    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    
    //Leitura da primeira carta.
    printf("Digite o Estado: \n");
    scanf("%s", &estado1);
    printf("Digite a Cidade: \n");
    scanf("%s", &cidade1);
    printf("Codido da carta numero entre 01 a 04\n");
    printf("Digite o Codigo da carta: \n");
    scanf("%s", &codigo1);
    printf("Numero de Habitantes: \n");  
    scanf("%d", &populacao1);
    printf("Área em m²: \n");
    scanf("%f", &area1);
    printf("Qual o PIB: \n");
    scanf("%f", &pib1);
    printf("Quantos Pontos Turisticos A: \n");
    scanf("%d", &pontos_turisticos1);

    //Leitura da primeira carta.
    printf("Digite o Estado: \n");
    scanf("%s", &estado2);
    printf("Digite a Cidade: \n");
    scanf("%s", &cidade2);
    printf("Digite o Codigo da carta: \n");
    scanf("%s", &codigo2);
    printf("Numero de Habitantes: \n");  
    scanf("%d", &populacao2);
    printf("Área em m²: \n");
    scanf("%f", &area2);
    printf("Qual o PIB: \n");
    scanf("%f", &pib2);
    printf("Quantos Pontos Turisticos A: \n");
    scanf("%d", &pontos_turisticos2);
    
    //Cartas prontas
    printf(" Codido da carta: %s\n Estado: %s\n Cidade: %s\n", codigo1, estado1, cidade1);
    printf(" População: %d\n Área: %f km²\n PIB: %f\n Pontos Turisticos: %d\n", populacao1, area1, pib1, pontos_turisticos1);

    printf(" Codido da carta: %s\n Estado: %s\n Cidade: %s\n", codigo2, estado2, cidade2);
    printf(" População: %d\n Área: %f km²\n PIB: %f\n Pontos Turisticos: %d\n", populacao2, area2, pib2, pontos_turisticos2);

    return 0;
}