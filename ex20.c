#include <stdio.h>

int main()
{

  int num;

  for (int i = 1; i <= 10; i++)
  {
    int f = 1;
    if (i % 2 != 0)
    {
      num = i;

      while (num > 0)
      {
        f *= num--;
      }
      printf("O fatorial de %d é: %d\n", i, f);
    }
  }
}