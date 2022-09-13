#include <stdio.h>

int main()
{
  int contador = 15;
  int num = 15;
  printf("abaixo estão os quadrados dos números inteiros múltiplos de 4 que estão entre 15 a 90:\n");

  for (num = 15; num <= 90; num++)
  {
    if (!(num % 4))
    {
      printf("%d = \t", num);
      printf("%d\n", num * num);
    }
  }
  return 0;
}