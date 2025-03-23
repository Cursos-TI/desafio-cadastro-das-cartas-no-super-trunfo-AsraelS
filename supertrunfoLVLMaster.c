#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1[3], estado2[3];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    
    // Entrada de dados para a primeira cidade
    printf("Informe os dados da primeira cidade:\n");
    printf("Estado (sigla): ");
    scanf("%2s", estado1);
    printf("Código da cidade: ");
    scanf("%9s", codigo1);
    printf("Nome da cidade: ");
    scanf("%49s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões R$): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);
    
    // Entrada de dados para a segunda cidade
    printf("\nInforme os dados da segunda cidade:\n");
    printf("Estado (sigla): ");
    scanf("%2s", estado2);
    printf("Código da cidade: ");
    scanf("%9s", codigo2);
    printf("Nome da cidade: ");
    scanf("%49s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões R$): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);
    
    // Cálculo da densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = (pib1 * 1e9) / populacao1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1e9) / populacao2;
    
    // Cálculo do Super Poder
    float super_poder1 = populacao1 + area1 + (pib1 * 1e9) + pontos1 + pib_per_capita1 + (1.0 / densidade1);
    float super_poder2 = populacao2 + area2 + (pib2 * 1e9) + pontos2 + pib_per_capita2 + (1.0 / densidade2);
    
    // Comparação das cidades
    printf("\nResultados da comparação:\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos1 > pontos2);
    printf("Densidade Populacional (menor vence): %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);
    
    return 0;
}
