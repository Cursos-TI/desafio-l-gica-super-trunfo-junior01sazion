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

    int escolha1, escolha2;
    float valorAtributo1_carta1, valorAtributo1_carta2;
    float valorAtributo2_carta1, valorAtributo2_carta2;
    float somaAtributos1, somaAtributos2;

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

    // Menu para escolha do primeiro atributo
    printf("--- Escolha o PRIMEIRO atributo para comparar ---\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite o número correspondente ao PRIMEIRO atributo (1-5): ");
    scanf("%d", &escolha1);

    // Menu para escolha do segundo atributo (dinâmico)
    printf("\n--- Escolha o SEGUNDO atributo para comparar ---\n");
    if (escolha1 != 1) printf("1 - População\n");
    if (escolha1 != 2) printf("2 - Área\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Número de Pontos Turísticos\n");
    if (escolha1 != 5) printf("5 - Densidade Demográfica\n");
    printf("Digite o número correspondente ao SEGUNDO atributo (");
    int count = 0;
    if (escolha1 != 1) count++;
    if (escolha1 != 2) count++;
    if (escolha1 != 3) count++;
    if (escolha1 != 4) count++;
    if (escolha1 != 5) count++;
    for (int i = 1; i <= 5; i++) {
        if (i != escolha1) {
            printf("%d", i);
            if (--count > 0) printf(",");
        }
    }
    printf("): ");
    scanf("%d", &escolha2);

    // Validação para garantir que os dois atributos são diferentes
    while (escolha2 == escolha1 || escolha2 < 1 || escolha2 > 5) {
        printf("Escolha inválida ou igual ao primeiro atributo. Digite novamente (1-5, diferente de %d): ", escolha1);
        scanf("%d", &escolha2);
    }

    printf("\n--- Resultado da Comparação ---\n");
    printf("Comparando: ");

    // Obtém os valores dos atributos escolhidos para a Carta 1
    switch (escolha1) {
        case 1:
            printf("População");
            valorAtributo1_carta1 = populacao1;
            valorAtributo1_carta2 = populacao2;
            break;
        case 2:
            printf("Área");
            valorAtributo1_carta1 = area1;
            valorAtributo1_carta2 = area2;
            break;
        case 3:
            printf("PIB");
            valorAtributo1_carta1 = pib1;
            valorAtributo1_carta2 = pib2;
            break;
        case 4:
            printf("Número de Pontos Turísticos");
            valorAtributo1_carta1 = pontosTuristicos1;
            valorAtributo1_carta2 = pontosTuristicos2;
            break;
        case 5:
            printf("Densidade Demográfica");
            valorAtributo1_carta1 = densidadeDemografica1;
            valorAtributo1_carta2 = densidadeDemografica2;
            break;
    }

    printf(" e ");

    // Obtém os valores dos atributos escolhidos para a Carta 2
    switch (escolha2) {
        case 1:
            printf("População\n");
            valorAtributo2_carta1 = populacao1;
            valorAtributo2_carta2 = populacao2;
            break;
        case 2:
            printf("Área\n");
            valorAtributo2_carta1 = area1;
            valorAtributo2_carta2 = area2;
            break;
        case 3:
            printf("PIB\n");
            valorAtributo2_carta1 = pib1;
            valorAtributo2_carta2 = pib2;
            break;
        case 4:
            printf("Número de Pontos Turísticos\n");
            valorAtributo2_carta1 = pontosTuristicos1;
            valorAtributo2_carta2 = pontosTuristicos2;
            break;
        case 5:
            printf("Densidade Demográfica\n");
            valorAtributo2_carta1 = densidadeDemografica1;
            valorAtributo2_carta2 = densidadeDemografica2;
            break;
    }

    printf("%s (%s): %.2f (Atributo 1), %.2f (Atributo 2)\n", nomeCidade1, estado1, valorAtributo1_carta1, valorAtributo2_carta1);
    printf("%s (%s): %.2f (Atributo 1), %.2f (Atributo 2)\n", nomeCidade2, estado2, valorAtributo1_carta2, valorAtributo2_carta2);

    // Aplica a regra de vitória para o primeiro atributo
    int vitoriaAtributo1 = (escolha1 == 5) ? (valorAtributo1_carta1 < valorAtributo1_carta2) : (valorAtributo1_carta1 > valorAtributo1_carta2);

    // Aplica a regra de vitória para o segundo atributo
    int vitoriaAtributo2 = (escolha2 == 5) ? (valorAtributo2_carta1 < valorAtributo2_carta2) : (valorAtributo2_carta1 > valorAtributo2_carta2);

    // Calcula a soma dos atributos para cada carta
    somaAtributos1 = valorAtributo1_carta1 + valorAtributo2_carta1;
    somaAtributos2 = valorAtributo1_carta2 + valorAtributo2_carta2;

    printf("Soma dos Atributos:\n");
    printf("%s (%s): %.2f\n", nomeCidade1, estado1, somaAtributos1);
    printf("%s (%s): %.2f\n", nomeCidade2, estado2, somaAtributos2);

    // Determina o vencedor com base na soma dos atributos (operador ternário)
    (somaAtributos1 > somaAtributos2) ? printf("Vencedor: %s (%s)!\n", nomeCidade1, estado1)
                                     : (somaAtributos2 > somaAtributos1) ? printf("Vencedor: %s (%s)!\n", nomeCidade2, estado2)
                                                                        : printf("Empate!\n");

    return 0;
}