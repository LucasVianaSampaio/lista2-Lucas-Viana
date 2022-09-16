#include <stdio.h>
#include <stdlib.h>

void binario(int num)
{
  if (num == 0)
  {
    printf("%d", num);
  }
  else
  {
    binario(num / 2);
    printf("%i", num % 2);
  }
}
int main()
{
  printf("Eis abaixo a tabela:\n");

  for (int num = 1; num <= 256; num++)
  {

    printf("\nO número %d em octal é %o, em hexa é %x, em binário é ", num, num, num);
    binario(num);
  }
  return 0;
}