#include <stdio.h>

int main()
{
  float num1, num2;

  printf("insira o valor que deseja dividir:\n");
  scanf("%f", &num1);
  printf("Insira por quem deseja dividir o primeiro valor:\n");
  scanf("%f", &num2);

  while (num2 == 0)
  {
    printf("Digite novamente o último valor(não pode ser um valor nulo):\n");
    scanf("%f", &num2);
  }

  printf("O valor da divisão é: %.2f", num1 / num2);
  return 0;
}