#include <stdio.h>

int main() {
    // Cabeçalho do jogo
    printf("Desafio Super Trunfo - Comparação de Cartas\n\n");

    // === Dados da Carta 1 - Campinas ===
    char estado1[] = "SP";
    char codigo1[] = "A1";
    char nomeCidade1[] = "Campinas";
    unsigned long int populacao1 = 1139000;
    float area1 = 794.571;
    float pib1 = 72.950; // PIB em bilhões
    int pontosTuristicos1 = 23;
    float densidade1 = populacao1 / area1;

    // === Dados da Carta 2 - Paraty ===
    char estado2[] = "RJ";
    char codigo2[] = "B1";
    char nomeCidade2[] = "Paraty";
    unsigned long int populacao2 = 45250;
    float area2 = 924.289;
    float pib2 = 1.955; // PIB em bilhões
    int pontosTuristicos2 = 287;
    float densidade2 = populacao2 / area2;

    // Exibe as cartas
    printf("Carta 1: %s (%s) - Código: %s\n", nomeCidade1, estado1, codigo1);
    printf("Carta 2: %s (%s) - Código: %s\n\n", nomeCidade2, estado2, codigo2);

    // Menu de opções
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Demográfica (MENOR vence)\n");
    printf("Digite sua opção (1-5): ");

    int opcao;
    scanf("%d", &opcao);

    // Separador visual
    printf("\n================ RESULTADO ================\n");

    // Switch com if-else aninhado
    switch(opcao) {
        case 1:
            printf("Atributo escolhido: População\n");
            printf("%s: %lu habitantes\n", nomeCidade1, populacao1);
            printf("%s: %lu habitantes\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo escolhido: Área\n");
            printf("%s: %.3f km²\n", nomeCidade1, area1);
            printf("%s: %.3f km²\n", nomeCidade2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.3f bilhões\n", nomeCidade1, pib1);
            printf("%s: %.3f bilhões\n", nomeCidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demográfica (MENOR vence)\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (menor densidade)\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (menor densidade)\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            // Opção inválida
            printf("Opção inválida! Por favor, escolha um número de 1 a 5.\n");
    }

    printf("==========================================\n");

    return 0;
}