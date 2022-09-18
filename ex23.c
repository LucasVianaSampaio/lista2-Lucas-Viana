#include <stdio.h>

int main()
{
  int x = 10;
  int y = 9;

  printf("A diferença do pré-incremento e do pós-incremento\n");

  printf("Primeiramente o número pré-incrementado onde o x inicialmente vale %d e o y vale %d:\n", x, y);
  for (int i = 1; i <= 5; i++)
  {
    int y = --x;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
  }

  y = x;

  printf("Agora o número pós incrementado onde o x inicialmente vale %d e o y vale %d:\n", x, y);
  for (int i = 1; i <= 5; i++)
  {
    int y = x--;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
  }
  return 0;
}