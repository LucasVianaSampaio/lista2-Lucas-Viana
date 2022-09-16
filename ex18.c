#include <stdio.h>

int main(void)
{
  float quadro = 1;
  float total = 1;

  printf("O total de grãos é de: %.0f", total);

  for (int i = 1; i <= 64; i++)
  {
    quadro *= 2;
    total += quadro;
    printf("total de grãos(%dº): %.0f\n", i, total);
  }
  return 0;
}