#include <stdio.h>

int main()
{
  int A, B, temp, soma = 0;
  puts("digite a faixa do intervalo(a ordem não importa)");
  scanf("%d %d", &A, &B);
  if (A > B)
  {
    temp = A;
    A = B;
    B = temp;
  }
  for (int i = A; i <= B; i++)
  {
    if (!(i % 2))
      soma += i;
  }
  printf("Valor da soma no intervalo dado: %d", soma);
  return 0;
}