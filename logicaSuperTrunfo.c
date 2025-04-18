#include <stdio.h>
#include <string.h>

int main() {
    // Dados da Carta 1 (Cidade 1)
    char estado1[3];
    char codigoCidade1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadeDemografica1;

    // Dados da Carta 2 (Cidade 2)
    char estado2[3];
    char codigoCidade2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadeDemografica2;

    int escolha;

    // Cadastro da Carta 1
    printf("--- Digite os dados da Carta 1 (Cidade 1) ---\n");
    printf("Estado (Ex: PE): ");
    scanf("%s", estado1);
    printf("Código da Cidade (Ex: PE01): ");
    scanf("%s", codigoCidade1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    densidadeDemografica1 = (area1 > 0) ? (float)populacao1 / area1 : 0.0;
    printf("\n");

    // Cadastro da Carta 2
    printf("--- Digite os dados da Carta 2 (Cidade 2) ---\n");
    printf("Estado (Ex: SP): ");
    scanf("%s", estado2);
    printf("Código da Cidade (Ex: SP02): ");
    scanf("%s", codigoCidade2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    densidadeDemografica2 = (area2 > 0) ? (float)populacao2 / area2 : 0.0;
    printf("\n");

    // Menu interativo para escolha do atributo de comparação
    printf("--- Menu de Comparação ---\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite o número correspondente ao atributo desejado (1-5): ");
    scanf("%d", &escolha);

    printf("\n--- Resultado da Comparação ---\n");

    switch (escolha) {
        case 1: // Comparar por População
            printf("Atributo de comparação: População\n");
            printf("%s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
            printf("%s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s (%s)\n", nomeCidade1, estado1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s (%s)\n", nomeCidade2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Comparar por Área
            printf("Atributo de comparação: Área\n");
            printf("%s (%s): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("%s (%s): %.2f km²\n", nomeCidade2, estado2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s (%s)\n", nomeCidade1, estado1);
            } else if (area2 > area1) {
                printf("Vencedor: %s (%s)\n", nomeCidade2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // Comparar por PIB
            printf("Atributo de comparação: PIB\n");
            printf("%s (%s): %.2f\n", nomeCidade1, estado1, pib1);
            printf("%s (%s): %.2f\n", nomeCidade2, estado2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s (%s)\n", nomeCidade1, estado1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s (%s)\n", nomeCidade2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Comparar por Número de Pontos Turísticos
            printf("Atributo de comparação: Número de Pontos Turísticos\n");
            printf("%s (%s): %d\n", nomeCidade1, estado1, pontosTuristicos1);
            printf("%s (%s): %d\n", nomeCidade2, estado2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s (%s)\n", nomeCidade1, estado1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s (%s)\n", nomeCidade2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Comparar por Densidade Demográfica
            printf("Atributo de comparação: Densidade Demográfica\n");
            printf("%s (%s): %.2f hab/km²\n", nomeCidade1, estado1, densidadeDemografica1);
            printf("%s (%s): %.2f hab/km²\n", nomeCidade2, estado2, densidadeDemografica2);
            if (densidadeDemografica1 < densidadeDemografica2) {
                printf("Vencedor: %s (%s)\n", nomeCidade1, estado1);
            } else if (densidadeDemografica2 < densidadeDemografica1) {
                printf("Vencedor: %s (%s)\n", nomeCidade2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}