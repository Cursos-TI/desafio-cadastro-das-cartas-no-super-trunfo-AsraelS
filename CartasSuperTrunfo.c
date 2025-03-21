#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura para armazenar os dados da carta
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} CartaSuperTrunfo;

// Função para limpar o buffer do teclado
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Função para ler os dados de uma carta
void lerCarta(CartaSuperTrunfo *carta, int numero) {
    printf("\nDigite os dados da Carta %d:\n", numero);
    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado);
    limparBuffer();
    printf("Codigo da Carta (ex: A01): ");
    scanf(" %3s", carta->codigo);
    limparBuffer();
    printf("Nome da Cidade: ");
    fgets(carta->nomeCidade, sizeof(carta->nomeCidade), stdin);
    carta->nomeCidade[strcspn(carta->nomeCidade, "\n")] = 0; // Remover nova linha
    printf("Populacao: ");
    scanf(" %d", &carta->populacao);
    printf("Area (em km2): ");
    scanf(" %f", &carta->area);
    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &carta->pib);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &carta->pontosTuristicos);
}

// Função para exibir os dados de uma carta
void exibirCarta(const CartaSuperTrunfo *carta, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("Estado: %c\n", carta->estado);
    printf("Codigo: %s\n", carta->codigo);
    printf("Nome da Cidade: %s\n", carta->nomeCidade);
    printf("Populacao: %d\n", carta->populacao);
    printf("Area: %.2f km2\n", carta->area);
    printf("PIB: %.2f bilhoes de reais\n", carta->pib);
    printf("Numero de Pontos Turisticos: %d\n", carta->pontosTuristicos);
}

int main() {
    CartaSuperTrunfo carta1, carta2;

    // Leitura dos dados das cartas
    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);

    // Exibição dos dados das cartas
    exibirCarta(&carta1, 1);
    exibirCarta(&carta2, 2);

    return 0;
}
