#include <stdio.h>

/*
  Desafio Super Trunfo - Comparação de Cartas
  Neste programa, duas cartas de cidades são comparadas com base em um único atributo.
  A carta com o maior PIB per capita vence.
*/

int main() {
    printf("Desafio Super Trunfo - Comparação de Cartas\n");

    // === Carta 1 ===
    char estado1[] = "SP";
    char codigo1[] = "A1";
    char nomeCidade1[] = "Campinas";
    unsigned long int populacao1 = 1139000;
    float area1 = 794.571;
    float pib1 = 72.950; // PIB em bilhões
    int pontosTuristicos1 = 23;

    // === Carta 2 ===
    char estado2[] = "RJ";
    char codigo2[] = "B1";
    char nomeCidade2[] = "Paraty";
    unsigned long int populacao2 = 45250;
    float area2 = 924.289;
    float pib2 = 1.955; // PIB em bilhões
    int pontosTuristicos2 = 287;

    // === Cálculos - Carta 1 ===
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;

    // === Cálculos - Carta 2 ===
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    // === Comparação: Atributo escolhido é PIB per Capita ===
    printf("\nComparação de cartas (Atributo: PIB per Capita):\n\n");

    printf("Carta 1 - %s (%s): R$ %.2f\n", nomeCidade1, estado1, pibPerCapita1);
    printf("Carta 2 - %s (%s): R$ %.2f\n", nomeCidade2, estado2, pibPerCapita2);

    // === Verificação com if / if-else ===
    if (pibPerCapita1 > pibPerCapita2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
