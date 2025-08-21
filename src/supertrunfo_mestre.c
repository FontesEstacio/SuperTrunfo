#include <stdio.h>

int main()
{
  // Variáveis para a primeira carta
  char estado1, codigo1[4], cidade1[50];
  unsigned long int populacao1;
  int pontos_turisticos1;
  float area1, pib1, densidade1, pib_per_capita1, super_poder1;

  // Variáveis para a segunda carta
  char estado2, codigo2[4], cidade2[50];
  unsigned long int populacao2;
  int pontos_turisticos2;
  float area2, pib2, densidade2, pib_per_capita2, super_poder2;

  // Variáveis para as comparações
  int vencedor_populacao, vencedor_area, vencedor_pib;
  int vencedor_pontos, vencedor_densidade, vencedor_pib_per_capita;
  int vencedor_super_poder;

  // Cabeçalho do programa
  printf("=== SUPER TRUNFO MESTRE - BATALHA DE CARTAS ===\n\n");

  // Cadastro da primeira carta
  printf("--- CARTA 1 ---\n");
  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o codigo da carta (ex: A01): ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite a populacao: ");
  scanf("%lu", &populacao1);

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
  scanf("%lu", &populacao2);

  printf("Digite a area em km2: ");
  scanf("%f", &area2);

  printf("Digite o PIB em bilhoes de reais: ");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontos_turisticos2);

  printf("\n");

  // Calculos para a primeira carta
  densidade1 = (float)populacao1 / area1;
  pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;
  super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);

  // Calculos para a segunda carta
  densidade2 = (float)populacao2 / area2;
  pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;
  super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);

  // Comparacoes entre as cartas
  vencedor_populacao = (populacao1 > populacao2) ? 1 : 0;
  vencedor_area = (area1 > area2) ? 1 : 0;
  vencedor_pib = (pib1 > pib2) ? 1 : 0;
  vencedor_pontos = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
  vencedor_densidade = (densidade1 < densidade2) ? 1 : 0;  // Menor densidade vence
  vencedor_pib_per_capita = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
  vencedor_super_poder = (super_poder1 > super_poder2) ? 1 : 0;

  // Exibição das cartas com calculos avançados
  printf("=== CARTAS CADASTRADAS COM CALCULOS AVANCADOS ===\n\n");

  // Exibição da primeira carta
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %lu\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
  printf("Super Poder: %.2f\n", super_poder1);

  printf("\n");

  // Exibição da segunda carta
  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
  printf("Super Poder: %.2f\n", super_poder2);

  printf("\n");

  // Resultados da batalha
  printf("=== RESULTADOS DA BATALHA ===\n\n");
  printf("Comparacao de Cartas:\n\n");
  printf("Populacao: Carta %d venceu (%d)\n", vencedor_populacao + 1, vencedor_populacao);
  printf("Area: Carta %d venceu (%d)\n", vencedor_area + 1, vencedor_area);
  printf("PIB: Carta %d venceu (%d)\n", vencedor_pib + 1, vencedor_pib);
  printf("Pontos Turisticos: Carta %d venceu (%d)\n", vencedor_pontos + 1, vencedor_pontos);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", vencedor_densidade + 1, vencedor_densidade);
  printf("PIB per Capita: Carta %d venceu (%d)\n", vencedor_pib_per_capita + 1, vencedor_pib_per_capita);
  printf("Super Poder: Carta %d venceu (%d)\n", vencedor_super_poder + 1, vencedor_super_poder);

  return 0;
}
