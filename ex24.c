#include <math.h>
#include <stdio.h>
#define MAX 500

int calculamdc(int x, int y)
{
  int resto;

  do
  {
    resto = x % y;
    x = y;
    y = resto;
  } while (resto != 0);

  return x;
}

int main()
{
  int ct1, ct2, aux, mdc1, mdc2;
  float h;

  for (ct1 = 1; ct1 <= MAX; ct1++)
  {
    for (ct2 = ct1; ct2 <= MAX; ct2++)
    {
      h = sqrt(pow(ct1, 2) + pow(ct2, 2));
      aux = h;
      if (aux == h && aux <= MAX)
      {
        mdc1 = calculamdc(ct1, ct2);
        mdc2 = calculamdc(h, mdc1);
        if (mdc1 == 1 && mdc2 == 1)
          printf("(%d,%d,%d)\n", ct1, ct2, aux);
      }
    }
  }

  return 0;
}