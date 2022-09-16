#include <stdio.h>

int main(void)
{
  int num;
  int digito;
  int invertido = 0;
  int digitado;

  puts("Tecle abaixo um número com cinco dígitos:\n");
  scanf("%d", &num);
  digitado = num;

  for (int i = 1; i <= 5; i++)
  {
    digito = num % 10;
    invertido = (invertido * 10) + digito;
    num /= 10;
  }
  if (digitado == invertido)
    printf("O número digitado é palindromo !!!\n");
  else
    printf("O número não é palindromo!!!\n");

  return 0;
}