#include <stdio.h>

int main()
{
  int num;
  int numero;
  int newnum;

  printf("Digite um número que deseja ver a tabuada:\n");
  scanf("%d", &num);
  printf("---------\n");

  for (numero = 1; numero <= 10; numero++)
  {
    newnum = num * numero;
    printf("%d x %d = %d\n", num, numero, newnum);
  }
  return 0;
}