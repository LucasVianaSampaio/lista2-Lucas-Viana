#include <stdio.h>

int main()
{
  int num;
  int maior = num;
  int menor = num;

  do
  {
    printf("Digite um número (Digite 0 pra encerrar):");
    scanf("%d", &num);

    if (num > maior)
    {
      maior = num;
    }

    if (num < menor && num != 0)
    {
      menor = num;
    }

  } while (num != 0);

  printf("O menor número é: %d\n", menor);
  printf("O maior número é: %d", maior);
}
