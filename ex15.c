#include <math.h>
#include <stdio.h>

int main()
{
  for (int i = 0; i <= 7; i++)
  {
    printf("3^%d = %.0f\n", i, pow(3, (float)i));
  }
  return 0;
}