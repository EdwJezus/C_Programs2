#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
  printf("====Lista de Atividades por Eduardo Jesus====\n");
  printf("\n");
  
  printf("Atividade 1\n");
  printf("\n");
  
  float valor1;
  printf("Digite um valor: \n");
  scanf("%f", &valor1);
  if (valor1 < 0) {
    printf("Valor Negativo. \n");
  }
  else if (valor1 >= 0) {
    printf("Valor Positivo. \n");
  }

////////////////

  printf("\n");
  printf("===============\n");
  printf("\n");
  printf("Atividade 2\n");
  printf("\n");
  
  int valor2, valor2pos;
  printf("Digite um valor: \n");
  scanf("%d", &valor2);
  valor2pos = (valor2)*(-1);
  if (valor2 > 0) {
    printf("O valor positivo é %d\n", valor2);
  }
  else if (valor2 < 0) {
    printf("O valor positivo é %d\n", valor2pos);
  }
  
//////////////

  printf("\n");
  printf("===============\n");
  printf("\n");
  printf("Atividade 3\n");
  printf("\n");
  
  double nota1, nota2, media;

  printf("Digite a primeira nota: \n");
  scanf("%lf", &nota1);
  printf("Digite a segunda nota: \n");
  scanf("%lf", &nota2);
  media = ((nota1 + nota2)/2);
  printf("Sua média é %.2lf\n", (media));
  if (media >= 6) {
    printf("PARABÉNS! Você foi aprovado.\n");
  }
  
//////////////

  printf("\n");
  printf("===============\n");
  printf("\n");
  printf("Atividade 4\n");
  printf("\n");
  
  double nota3, nota4, media2;

  printf("Digite a primeira nota: \n");
  scanf("%lf", &nota3);
  printf("Digite a segunda nota: \n");
  scanf("%lf", &nota4);
  media2 = ((nota3 + nota4)/2);
  printf("Sua média é %.2lf\n", (media2));
  if (media2 >= 6) {
    printf("PARABÉNS! Você foi aprovado.\n");
  }
  else if (media2 < 6) {
    printf("Você foi REPROVADO! Estude mais.\n");
  }

//////////////

  printf("\n");
  printf("===============\n");
  printf("\n");
  printf("Atividade 5\n");
  printf("\n");

  double nota5, nota6, media3;

  printf("Digite a nota da primeira avaliação: \n");
  scanf("%lf", &nota5);
  printf("Digite a nota da segunda avaliação: \n");
  scanf("%lf", &nota6);
  media3 = ((nota5 + nota6)/2);
  printf("Sua média semestral é %.2lf\n", (media3));
  if (media3 >= 6) {
    printf("APROVADO.\n");
  }
  else if (media3 < 6 && media3 > 3) {
    printf("EXAME.\n");
  }
  else if (media3 < 3) {
    printf("REPROVADO.\n");
  }

  system("pause");
}
