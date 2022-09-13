#include <stdio.h>

int main()
{
  int num = 15;
  int A, B;

  printf("Digite o limite da faixa A:\n");
  scanf("%d", &A);

  printf("Digite o limite da faixa B:\n");
  scanf("%d", &B);

  for (num = A; num <= B; num++)
  {
    if (!(num % 4))
    {
      printf("%d =\t", num);
      printf("%d\n", num * num);
    }
  }
  for (num = B; num <= A; num++)
  {
    if (!(num % 4))
    {
      printf("%d =\t", num);
      printf("%d\n", num * num);
    }
  }
  return 0;
}