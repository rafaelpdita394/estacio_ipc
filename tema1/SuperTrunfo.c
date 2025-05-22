#include <stdio.h>

// Definição da estrutura para uma carta
struct Carta {
    char estado[3];             // Ex: SP
    char codigo[4];             // Ex: A01
    char nomeCidade[50];        // Ex: São Paulo
    int populacao;              // População
    float area;                 // Área
    float pib;                  // PIB
    int pontosTuristicos;       // Pontos turísticos
    float densidadePopulacional;// Calculado
    float pibPerCapita;         // Calculado
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf("%s", carta1.estado);
    printf("Código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculo da densidade e PIB per capita da carta 1
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", carta2.estado);
    printf("Código da carta (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculo da densidade e PIB per capita da carta 2
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Exibição dos dados das duas cartas
    printf("\n----- Dados da Carta 1 -----\n");
    printf("Cidade: %s (%s)\n", carta1.nomeCidade, carta1.estado);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade populacional: %.2f\n", carta1.densidadePopulacional);
    printf("PIB per capita: %.2f\n", carta1.pibPerCapita);

    printf("\n----- Dados da Carta 2 -----\n");
    printf("Cidade: %s (%s)\n", carta2.nomeCidade, carta2.estado);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade populacional: %.2f\n", carta2.densidadePopulacional);
    printf("PIB per capita: %.2f\n", carta2.pibPerCapita);

    // ----- Comparação -----
    // 🏆 Escolha o atributo para comparar: aqui estamos comparando o PIB
    printf("\n--- Comparação de cartas (Atributo: PIB) ---\n");
    printf("%s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pib);
    printf("%s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, carta2.pib);

    if (carta1.pib > carta2.pib) {
        printf("\nResultado: %s (%s) venceu!\n", carta1.nomeCidade, carta1.estado);
    } else if (carta2.pib > carta1.pib) {
        printf("\nResultado: %s (%s) venceu!\n", carta2.nomeCidade, carta2.estado);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
