#include <stdio.h>

int main() {
    // Declarando variáveis
    char estado1, estado2; // Variável para os estados
    char codigo1[5], codigo2[5]; // Variável para os códigos das cartas
    char cidade1[20], cidade2[20]; // Variável para as cidades
    int pontos1, pontos2, populacao1, populacao2; // Variáveis de pontos turísticos e população
    float area1, area2, pib1, pib2; // Variáveis de área e PIB

    // Cadastrando a carta numero 01
    printf("CADASTRO CARTA 01 - SUPER TRUNFO!\n");

    printf("Digite a letra correspondente ao seu Estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o nome da sua cidade:\n");
    scanf(" %s", &cidade1);

    printf("Digite o código da sua carta:\n");
    scanf(" %s", &codigo1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área (km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB (milhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos1);

    printf("\n");
    // Imprimindo a carta 01
    printf("CARTA 01 CADASTRADA COM SUCESSO!\n");

    printf("Estado: %c \n", estado1);
    printf("Cidade: %s \n", cidade1);
    printf("Código: %s \n", codigo1);
    printf("População: %d \n", populacao1);
    printf("Área em km²: %.3f \n", area1);
    printf("PIB: %.3f \n", pib1);
    printf("Número de pontos turísticos: %d \n", pontos1);

    printf("\n");
    // Cadastrando a carta 02
    printf("CADASTRO CARTA 02 - SUPER TRUNFO!\n");

    printf("Digite a letra correspondente ao seu Estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o nome da sua cidade:\n");
    scanf(" %s", &cidade2);

    printf("Digite o código da sua carta:\n");
    scanf(" %s", &codigo2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área (km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB (milhões de reais):\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos2);

    printf("\n");
    // Imprimindo a carta 02
    printf("CARTA 02 CADASTRADA COM SUCESSO!\n");

    printf("Estado: %c \n", estado2);
    printf("Cidade: %s \n", cidade2);
    printf("Código: %s \n", codigo2);
    printf("População: %d \n", populacao2);
    printf("Área em km²: %.3f \n", area2);
    printf("PIB: %.3f \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontos2);

    return 0;
}
