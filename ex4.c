#include <stdio.h>
#include <stdlib.h>

int main()
{
  float jose = 150, pedro = 110;
  int ano = 0;

  while (jose >= pedro)
  {
    jose += 2;
    pedro += 3;
    ano++;

    printf("José: %.2f cm\tPedro: %.2f cm\tAno: %d\n", jose, pedro, ano);
  }
  printf("Sao necessarios %d anos!\n\n", ano);
  return 0;
}