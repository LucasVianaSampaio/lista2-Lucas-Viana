#include <stdio.h>

int main()
{

  int n, resto, setes = 0;

  printf("Informe um número inteiro:\n");
  scanf("%d", &n);
  while (n > 0)
  {
    resto = n % 10;
    n = n / 10;

    if (resto == 7)
      setes += 1;
  }
  printf("O total de dígitos sete é: %d", setes);
}