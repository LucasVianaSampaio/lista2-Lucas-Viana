#include <stdio.h>

int main()
{
  int A;
  int B;
  int i;

  printf("Digite o valor da faixa A:\n");
  scanf("%d", &A);
  printf("Digite o valor da faixa B:\n");
  scanf("%d", &B);

  puts("Eis abaixo os números divisíveis por 3 dentro da faixa determinada de "
       "A a B");

  for (int i = A; i <= B; i++)
  {
    if (!(i % 3))
    {
      printf("%d\t", i);
    }
  }

  for (int i = A; i >= B; i--)
  {
    if (!(i % 3))
    {
      printf("%d\t", i);
    }
  }
  return 0;
}