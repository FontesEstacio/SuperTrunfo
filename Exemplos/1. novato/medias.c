#include <stdio.h>

int main()
{
  char nome[50];
  int idade, matricula;
  float nota1, nota2, nota3, media;

  // Lendo dados pessoais do aluno
  printf("Digite o nome do aluno: ");
  scanf("%s", nome);

  printf("Digite a idade do aluno: ");
  scanf("%d", &idade);

  printf("Digite a matricula do aluno: ");
  scanf("%d", &matricula);

  // Lendo as três notas
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  printf("Digite a terceira nota: ");
  scanf("%f", &nota3);

  // Calculando a média das notas
  media = (nota1 + nota2 + nota3) / 3;

  // Exibindo todos os dados e resultados
  printf("\n=== DADOS DO ALUNO ===\n");
  printf("Nome: %s\n", nome);
  printf("Idade: %d anos\n", idade);
  printf("Matricula: %d\n", matricula);
  printf("Nota 1: %.2f\n", nota1);
  printf("Nota 2: %.2f\n", nota2);
  printf("Nota 3: %.2f\n", nota3);
  printf("Media final: %.2f\n", media);

  return 0;
}
