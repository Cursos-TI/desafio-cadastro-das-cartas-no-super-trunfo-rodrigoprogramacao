#include <stdio.h>

int main() {
char estado1;
char codigo1[5];
char cidade1[50];
int pontos1;
float area1, pib1, populacao1;

printf("CADASTRO CARTA 01 - SUPER TRUNFO!\n");

printf("Digite a letra correspondente ao seu Estado:\n");
scanf(" %c", &estado1);

printf("Digite sua cidade:\n");
scanf("%s", &cidade1);

printf("Digite seu código:\n");
scanf("%s", &codigo1);

printf("Digite a população:\n");
scanf("%d", &populacao1);

printf("Digite a área (km²):\n");
scanf("%f", &area1);

printf("Digite o PIB (milhões de reais):\n");
scanf("%f, &pib1");

printf("Digite o número de pontos turísticos:\n");
scanf("%d, &pontos1");

printf("\n");

printf("CARTA 01 CADASTRADA COM SUCESSO!\n");

printf("\n");

printf("Estado: %c \n", estado1);
printf("Cidade: %s \n", cidade1);
printf("Código: %s \n", codigo1);
printf("População: %d \n", populacao1);
printf("Área em km²: %f \n", area1);
printf("PIB: %f \n", pib1);
printf("Número de pontos turísticos: %d \n", pontos1);


    return 0;
}
