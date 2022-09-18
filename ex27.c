#include <stdio.h>
int main()
{

  int n, maior, menor;

  puts("Informe um numero inteiro:");
  scanf("%i", &n);

  maior = n;
  menor = n;

  while (n >= 0 || n % 2 != 0)
  {

    if (n > maior)
    {
      maior = n;
    }
    else if (n < menor)
    {
      menor = n;
    }
    puts("Digite outro numero: ");
    scanf("%i", &n);
  }
  printf("\nO produto entre o maior termo, %d, e o menor, %d, é: %d\n", maior, menor, maior * menor);

  return 0;
}