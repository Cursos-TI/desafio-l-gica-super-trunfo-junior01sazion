#include <stdio.h>
#include <string.h>

int main() {
    // Dados da Carta 1
    char estado1[3];
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Dados da Carta 2
    char estado2[3];
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Cadastro da Carta 1
    printf("--- Digite os dados da Carta 1 ---\n");
    printf("Estado (Ex: SP): ");
    scanf("%s", estado1);
    printf("Código da Carta (Ex: SP01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em milhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    densidadePopulacional1 = (area1 > 0) ? (float)populacao1 / area1 : 0.0;
    pibPerCapita1 = (populacao1 > 0) ? pib1 / populacao1 : 0.0;
    printf("\n");

    // Cadastro da Carta 2
    printf("--- Digite os dados da Carta 2 ---\n");
    printf("Estado (Ex: RJ): ");
    scanf("%s", estado2);
    printf("Código da Carta (Ex: RJ02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em milhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    densidadePopulacional2 = (area2 > 0) ? (float)populacao2 / area2 : 0.0;
    pibPerCapita2 = (populacao2 > 0) ? pib2 / populacao2 : 0.0;
    printf("\n");

    printf("--- Comparação de Cartas (Atributo: PIB) ---\n");
    printf("\n");
    printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, pib2);
    printf("\n");

    // Compara as cartas com base no PIB
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: As cartas têm o mesmo PIB!\n");
    }

    return 0;
}