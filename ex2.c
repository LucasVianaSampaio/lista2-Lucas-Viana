#include <stdio.h>

int main(void)
{
  int num;

  printf("Insira um número de um a sete:\n");
  scanf("%d", &num);

  do
  {

    if (num == 1)
      printf("O dia correspondente ao número digitado é Domingo");

    if (num == 2)
      printf("O dia correspondente ao número digitado é Segunda");

    if (num == 3)
      printf("O dia correspondente ao número digitado é Terça");

    if (num == 4)
      printf("O dia correspondente ao número digitado é Quarta");

    if (num == 5)
      printf("O dia correspondente ao número digitado é Quinta");

    if (num == 6)
      printf("O dia correspondente ao número digitado é Sexta");

    if (num == 7)
      printf("O dia correspondente ao número digitado é Sábado");

    break;
  } while (num < 8);

  if (num >= 8)
    printf("Número de dia não válido");
  return 0;
}