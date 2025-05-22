#include <stdio.h>

// Definição da estrutura para uma carta
struct Carta {
    char estado[3];             
    char codigo[4];             
    char nomeCidade[50];       
    int populacao;             
    float area;                 
    float pib;                  
    int pontosTuristicos;       
    float densidadePopulacional;
    float pibPerCapita;         
};

int main() {
    struct Carta carta1, carta2;
    int opcao;

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

    // ----- Menu Interativo -----
    printf("\n===== Super Trunfo - Comparação de Cartas =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\n===== Resultado da Comparação =====\n");

    switch(opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d\n", carta1.nomeCidade, carta1.populacao);
            printf("%s: %d\n", carta2.nomeCidade, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Vencedor: %s\n", carta1.nomeCidade);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Vencedor: %s\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f\n", carta1.nomeCidade, carta1.area);
            printf("%s: %.2f\n", carta2.nomeCidade, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Vencedor: %s\n", carta1.nomeCidade);
            } else if (carta2.area > carta1.area) {
                printf("Vencedor: %s\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", carta1.nomeCidade, carta1.pib);
            printf("%s: %.2f\n", carta2.nomeCidade, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Vencedor: %s\n", carta1.nomeCidade);
            } else if (carta2.pib > carta1.pib) {
                printf("Vencedor: %s\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", carta1.nomeCidade, carta1.pontosTuristicos);
            printf("%s: %d\n", carta2.nomeCidade, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("Vencedor: %s\n", carta1.nomeCidade);
            } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                printf("Vencedor: %s\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Populacional (Menor vence)\n");
            printf("%s: %.2f\n", carta1.nomeCidade, carta1.densidadePopulacional);
            printf("%s: %.2f\n", carta2.nomeCidade, carta2.densidadePopulacional);
            if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
                printf("Vencedor: %s\n", carta1.nomeCidade);
            } else if (carta2.densidadePopulacional < carta1.densidadePopulacional) {
                printf("Vencedor: %s\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6:
            printf("Atributo: PIB per capita\n");
            printf("%s: %.2f\n", carta1.nomeCidade, carta1.pibPerCapita);
            printf("%s: %.2f\n", carta2.nomeCidade, carta2.pibPerCapita);
            if (carta1.pibPerCapita > carta2.pibPerCapita) {
                printf("Vencedor: %s\n", carta1.nomeCidade);
            } else if (carta2.pibPerCapita > carta1.pibPerCapita) {
                printf("Vencedor: %s\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha uma opção de 1 a 6.\n");
            break;
    }

    printf("\n===== Fim da Comparação =====\n");

    return 0;
}
