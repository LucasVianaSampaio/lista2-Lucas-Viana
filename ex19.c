#include <stdio.h>

int main()
{
  int A;
  int B;
  int i;
  int soma = 0;
  int elementos = 0;

  printf("Digite o valor da faixa A:\n");
  scanf("%d", &A);
  printf("Digite o valor da faixa B:\n");
  scanf("%d", &B);

  for (int i = A; i <= B; i++)
  {
    soma += i;
    elementos++;
  }

  for (int i = A; i >= B; i--)
  {
    soma += i;
    elementos++;
  }
  float media = (float)soma / elementos;

  printf("A média aritmética da faixa digitada é: %.2f", media);

  return 0;
}