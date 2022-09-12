#include <math.h>
#include <stdio.h>

int main()
{
  float merc;
  float newmerc;
  float ent;
  float prest;

  printf("Digite abaixo o valor da mercadoria:\n");
  scanf("%f", &merc);

  newmerc = fmod(merc, 3);
  merc = merc - newmerc;
  printf("A entrada será de: %.2f R$\n", (merc / 3) + newmerc);
  printf("As duas prestações serão de: %.2f R$ cada\n", merc / 3);

  return 0;
}