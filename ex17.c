#include <stdio.h>
#include <math.h>

int main()
{
  float temp;

  printf("Eis abaixo a conversão de graus Celsius para Fahrenheit:\n");

  for (temp = 10; temp < 101; temp++)
  {
    if (!(fmod(temp, 10)))
    {
      printf("%.0f graus Celsius representa %.2f graus Fahrenheit\n", temp, (temp * 9 / 5) + 32);
    }
  }
  return 0;
}