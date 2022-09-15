#include <stdio.h>

int main()
{
  int num;
  int soma = 0;
  int num5, soma5;

  printf("Eis abaixo o somatório dos números divisíveis por 3 no intervalo de 0 a 100:\n");

  for (int num = 0; num <= 200; num++)
  {
    if (num <= 100)
    {
      if (!(num % 3))
      {
        soma = num + soma;
      }
    }

    if (num >= 100)
    {
      if (!(num % 5))
      {
        num5 = num;
        soma5 = num5 + soma5;
      }
    }
  }
  printf("%d\n", soma);
  printf("E abaixo está a soma de todos os números divisíveis por 5 no intervalo de 100 a 200:\n");
  printf("%d", soma5);
  return 0;
}