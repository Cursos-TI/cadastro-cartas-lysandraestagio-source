#include <stdio.h>

   char estado1;
    char carta1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

  char estado2;
    char carta2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

int main() {
 

    printf("Cadastro de Carta - Super Trunfo\n");

    printf("Digite o Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta da primeira carta (A01, A02...): \n");
    scanf("%s", carta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", cidade1);

    printf("Qual a Populacao: \n");
    scanf("%d", &populacao1);

    printf("Área em km2: \n");
    scanf("%f", &area1);

    printf("Qual o PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    printf("\n Dados da Carta \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);


    printf("Agora vamos para o segundo Cadastro de Carta - Super Trunfo\n");

    printf("Digite o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta da primeira carta (A01, A02...): \n");
    scanf("%s", carta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", cidade2);

    printf("Qual a Populacao: \n");
    scanf("%d", &populacao2);

    printf("Área em km2: \n");
    scanf("%f", &area2);

    printf("Qual o PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    printf("\n Dados da Carta \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);

    return 0;
}
