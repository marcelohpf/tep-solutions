#include <stdio.h>

int main() {

  char nome[1000];
  double salario, vendas, total;

  scanf("%s", nome);
  scanf("%lf", &salario);
  scanf("%lf", &vendas);
  
  total = salario + vendas * 0.15;

  printf("TOTAL = R$ %.2lf", total);
  printf("\n");

  return 0;
}
