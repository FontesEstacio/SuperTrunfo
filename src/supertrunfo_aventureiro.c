#include <stdio.h>

int main()
{
  // Variáveis para a primeira carta
  char estado1, codigo1[4], cidade1[50];
  int populacao1, pontos_turisticos1;
  float area1, pib1, densidade1, pib_per_capita1;

  // Variáveis para a segunda carta
  char estado2, codigo2[4], cidade2[50];
  int populacao2, pontos_turisticos2;
  float area2, pib2, densidade2, pib_per_capita2;

  // Cabeçalho do programa
  printf("=== SUPER TRUNFO AVENTUREIRO - CALCULOS AVANCADOS ===\n\n");

  // Cadastro da primeira carta
  printf("--- CARTA 1 ---\n");
  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o codigo da carta (ex: A01): ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite a populacao: ");
  scanf("%d", &populacao1);

  printf("Digite a area em km2: ");
  scanf("%f", &area1);

  printf("Digite o PIB em bilhoes de reais: ");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontos_turisticos1);

  printf("\n");

  // Cadastro da segunda carta
  printf("--- CARTA 2 ---\n");
  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta (ex: B02): ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite a populacao: ");
  scanf("%d", &populacao2);

  printf("Digite a area em km2: ");
  scanf("%f", &area2);

  printf("Digite o PIB em bilhoes de reais: ");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontos_turisticos2);

  printf("\n");

  // Calculos para a primeira carta
  densidade1 = populacao1 / area1;
  pib_per_capita1 = (pib1 * 1000000000) / populacao1;

  // Calculos para a segunda carta
  densidade2 = populacao2 / area2;
  pib_per_capita2 = (pib2 * 1000000000) / populacao2;

  // Exibição das cartas com calculos avançados
  printf("=== CARTAS CADASTRADAS COM CALCULOS AVANCADOS ===\n\n");

  // Exibição da primeira carta
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

  printf("\n");

  // Exibição da segunda carta
  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

  return 0;
}
