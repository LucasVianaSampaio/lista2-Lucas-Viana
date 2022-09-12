#include <stdio.h>

int main()
{
  int r;
  int t1 = 0;
  int t2 = 1;
  int c;

  printf("Abaixo está escrita a sequência de Fibonacci do primeiro até o vigésimo termo:\n");
  printf("%d\t", t1);
  printf("%d\t", t2);

  for (c = 18; c > 0; c--)
  {
    r = t1 + t2;
    printf("%d\t", r);
    t1 = t2;
    t2 = r;
  }

  return 0;
}