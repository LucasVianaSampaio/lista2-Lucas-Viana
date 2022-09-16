#include <stdio.h>

int main()
{
  int voto;
  int voto5 = 0;
  int voto7 = 0;
  int voto0 = 0;
  int votoNUL = 0;

  puts("Digite seu voto abaixo, você pode votar em um candidato quantas vezes desejar\n");
  puts("5-Paulo\t 7-Renata\t 0-Voto em branco\n");
  puts("Qualquer voto diferente dos números acima é considerado NULO:\n");
  puts("Digite un número negativo caso queira encerrar a votação\n");
  scanf("%d", &voto);

  while (voto >= 0)
  {
    if (voto == 7)
    {
      printf("Tem certeza que deseja votar em Renata?\n");
      printf("Caso sim, aperte novamente, caso não aperte o número de outro candidato:\n");
      scanf("%d", &voto);
      if (voto == 7)
      {
        printf("Você votou em renata\n");
        voto7++;
        printf("Você tem a oportunidade de votar em Renata novamente\n");
      }
    }

    if (voto == 5)
    {
      printf("Tem certeza que deseja votar em Paulo?\n");
      printf("Caso sim, aperte novamente, caso não aperte o número de outro candidato:\n");
      scanf("%d", &voto);
      if (voto == 5)
      {
        printf("Você votou em Paulo\n");
        voto5++;
        printf("Você tem a oportunidade de votar em Paulo novamente\n");
      }
    }

    if (voto == 0)
    {
      printf("Tem certeza que deseja votar em branco?\n");
      printf("Caso sim, aperte novamente, caso não aperte o número de outro candidato:\n");
      scanf("%d", &voto);
      if (voto == 0)
      {
        printf("Você votou em branco\n");
        voto0++;
        printf("Você tem a oportunidade de votar em branco novamente\n");
      }
    }

    if (0 < voto != 0 && voto != 5 && voto != 7)
    {
      printf("Tem certeza que deseja votar nulo?\n");
      printf("Caso sim, aperte novamente, caso não aperte o número de outro candidato:\n");
      scanf("%d", &voto);
      if (voto != 0 && voto != 5 && voto != 7)
      {
        printf("Você votou nulo");
        votoNUL++;
        printf("Você tem a oportunidade de votar nulo novamente\n");
      }
    }
  }
  int total = voto5 + voto7 + voto0 + votoNUL;

  float voto5flo = ((float)voto5 / total) * 100;
  float voto7flo = ((float)voto7 / total) * 100;
  float voto0flo = ((float)voto0 / total) * 100;
  float votoNULflo = ((float)votoNUL / total) * 100;

  printf("TOTAL DE VOTOS (aproximadamente)\n");
  printf("Paulo = %.2f porcento\n", voto5flo);
  printf("Renata = %.2f porcento\n", voto7flo);
  printf("Em branco = %.2f porcento\n", voto0flo);
  printf("Nulo = %.2f porcento\n", votoNULflo);
  printf("Votação encerrada\n");

  if (voto5flo > voto7flo)
  {
    printf("O candidato eleito é Paulo com %.2f porcento dos votos(contando com os votos em branco)", voto5flo + voto0flo);
  }
  else if (voto7flo > voto5flo)
  {
    printf("O candidato eleito é Renata com %.2f porcento dos votos(contando com os votos em branco)", voto7flo + voto0flo);
  }
  return 0;
}