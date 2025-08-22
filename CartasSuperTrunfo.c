#include <stdio.h>

int main() {
char estadoA, estadoB;
char codigoA[5], codigoB[5];
char cidadeA[50], cidadeB[50];
int pontosA;
float areaA, pibA, populacaoA;

printf("CADASTRO CARTA 01 - SUPER TRUNFO!\n");

printf("Digite a letra correspondente ao seu Estado:\n");
scanf(" %c", &estadoA);

printf("Digite sua cidade:\n");
scanf("%s", &cidadeA);

printf("Digite seu código:\n");
scanf("%s", &codigoA);

printf("Digite a população:\n");
scanf("%d", &populacaoA);

printf("Digite a área em km²:\n");
scanf("%f", &areaA);

printf("Digite o PIB:\n");
scanf("%f, &pibA");

printf("Digite o número de pontos turísticos:\n");
scanf("%d, &pontosA");

printf("\n");

printf("CARTA 01 CADASTRADA COM SUCESSO!\n");

printf("\n");

printf("Estado: %c \n", estadoA);
printf("Cidade: %s \n", cidadeA);
printf("Código: %s \n", codigoA);
printf("População: %d \n", populacaoA);
printf("Área em km²: %f \n", areaA);
printf("PIB: %f \n", pibA);
printf("Número de pontos turísticos: %d \n", pontosA);




    return 0;
}
