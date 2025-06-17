#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado1, codigo1[4], cidade1[50];
    char estado2, codigo2[4], cidade2[50];
    int populacao1, turismo1, populacao2, turismo2;
    float area1, PIB1, densidade1, capta1;
    float area2, PIB2, densidade2, capta2;

    printf("Digite os valores da carta 1:");

    printf("\nEstado (1 caractere): ");
    scanf(" %c", &estado1);

    printf("Codigo (Ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area Km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turismo1);

    densidade1 = populacao1 / area1;
    capta1 = PIB1 / populacao1;

    printf("\n\nDigite os valores da carta 2:");

    getchar();

    printf("\nEstado (1 caractere): ");
    scanf("%c", &estado2);

    printf("Codigo (Ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area Km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turismo2);

    densidade2 = populacao2 / area2;
    capta2 = PIB2 / populacao2;

    printf("\n\nCarta 1:");
    printf("\nEstado: %c", estado1);
    printf("\nCodigo: %s", codigo1);
    printf("\nNome da cidade: %s", cidade1);
    printf("\nPopulacao: %d", populacao1);
    printf("\nArea Km²: %.2f", area1);
    printf("\nPIB: %.2f", PIB1);
    printf("\nNumero de pontos turisticos: %d", turismo1);
    printf("\nDensidade populacional: %.2f", densidade1);
    printf("\nPIB per capita: %.2f", capta1);

    printf("\n\nCarta 2:");
    printf("\nEstado: %c", estado2);
    printf("\nCodigo: %s", codigo2);
    printf("\nNome da cidade: %s", cidade2);
    printf("\nPopulacao: %d", populacao2);
    printf("\nArea Km²: %.2f", area2);
    printf("\nPIB: %.2f", PIB2);
    printf("\nNumero de pontos turisticos: %d", turismo2);
    printf("\nDensidade populacional: %.2f", densidade2);
    printf("\nPIB per capita: %.2f", capta2);

    if(densidade1 < densidade2){
        printf("\n\nDensidade pupulacional de %s: %.2f \n", cidade1, densidade1);
        printf("Densidade populacional de %s: %.2f \n", cidade2, densidade2);
        printf("Carta 1 (%s) vence", cidade1);
    }else{
        printf("\n\nDensidade populacional de %s: %.2f \n", cidade1, densidade1);
        printf("Densidade populacional de %s: %.2f \n", cidade2, densidade2);
        printf("Carta 2 (%s) vence", cidade2);
    }

    return 0;
}
